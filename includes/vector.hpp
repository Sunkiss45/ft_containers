/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:45:40 by ebarguil          #+#    #+#             */
/*   Updated: 2023/03/09 20:06:04 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

# include <memory>
# include "vector_iterator.hpp"
# include "reverse_iterator.hpp"
# include "enable_if.hpp"
# include "is_integral.hpp"

namespace ft
{
	template < class T, class Alloc = std::allocator<T> >
	class vector
	{
		public:
			typedef T														value_type;
			typedef Alloc													allocator_type;
			typedef typename allocator_type::reference						reference;
			typedef typename allocator_type::const_reference				const_reference;
			typedef typename allocator_type::pointer						pointer;
			typedef typename allocator_type::const_pointer					const_pointer;
			typedef typename ft::vector_iterator<value_type>				iterator;
			typedef typename ft::vector_iterator<const value_type>			const_iterator;
			typedef typename ft::reverse_iterator<iterator>					reverse_iterator;
			typedef typename ft::reverse_iterator<const_iterator>			const_reverse_iterator;
			typedef typename ft::iterator_traits<iterator>::difference_type	difference_type;
			typedef	std::size_t													size_type;

		private:
			allocator_type	_alloc;
			pointer			_array;
			size_type		_size;
			size_type		_capa;

		public:
			
			/*
				CONSTRUCTOR - DESTRUCTOR
			*/

			/* DEFAULT */
			explicit vector(const allocator_type& alloc = allocator_type())
			: _alloc(alloc), _array(NULL), _size(0), _capa(0) {}

			/* FILL */
			explicit vector(size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
			: _alloc(alloc), _array(NULL), _size(n), _capa(n) {
				this->_array = this->_alloc.allocate(n);
				if (n > 0) {
					for (size_type i = 0; i < n; i++) {
						this->_alloc.construct(this->_array + i, val); }
				}
				return;
			}

			/* RANGE */
			template <class InputIterator>
			vector(InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type(),
			typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type = NULL)
			: _alloc(alloc), _array(NULL), _size(0), _capa(0) {
				difference_type	dif = last - first;
				if (dif > 0) {
					this->_size = (size_type)dif;
					this->_capa = (size_type)dif;
					this->_array = this->_alloc.allocate(this->_capa);
					for (; first != last; first++) {
						this->_alloc.construct(this->_array + (dif - (last - first)), *first); }
				}
				return;
			}

			/* COPY */
			vector(const vector &x)
			: _alloc(x.get_allocator()), _array(NULL), _size(x.size()), _capa(x.size()) {
				if (this->size() > 0) {
					this->_array = this->_alloc.allocate(this->capacity());
					for (size_type i = 0; i < x.size(); i++) {
						this->_alloc.construct(this->_array + i, *(x._array + i)); }
				}
				return;
			}

			/* OPERATOR= */
			vector	&operator=(const vector &x) {
				if (this != &x) {
					this->clear();
					this->_alloc.deallocate(this->_array, this->capacity());
					if (x.size() > this->capacity()) {
						this->_capa = x.size(); }
					this->_array = this->_alloc.allocate(this->capacity());
					this->_size = x.size();
					for (size_type i = 0; i < x.size(); i++) {
						this->_alloc.construct(this->_array + i, *(x._array + i)); }
				}
				return (*this);
			}

			/* DESTRUCTOR */
			~vector(void) {
				this->clear();
				if (this->_capa > 0) {
					this->_alloc.deallocate(this->_array, this->_capa);
				}
				return;
			}

			/*
				ITERATORS
			*/

			/* BEGIN */
			iterator		begin(void) {
				return (iterator(this->_array));
			}

			const_iterator	begin(void) const {
				return (const_iterator(this->_array));
			}

			/* END */
			iterator		end(void) {
				return (iterator(this->_array + this->size()));
			}

			const_iterator	end(void) const {
				return (const_iterator(this->_array + this->size()));
			}

			/* RBEGIN */
			reverse_iterator		rbegin(void) {
				return (reverse_iterator(this->end()));
			}

			const_reverse_iterator	rbegin(void) const {
				return (const_reverse_iterator(this->end()));
			}

			/* REND */
			reverse_iterator		rend(void) {
				return (reverse_iterator(this->begin()));
			}

			const_reverse_iterator	rend(void) const {
				return (const_reverse_iterator(this->begin()));
			}

			/*
				CAPACITY
			*/

			/* GETTER */
			size_type	size(void) const {
				return (this->_size); }

			size_type	max_size(void) const {
				return (this->_alloc.max_size()); }

			size_type	capacity(void) const {
				return (this->_capa); }

			/* EMPTY */
			bool	empty(void) const {
				return (this->size() > 0 ? false : true); }

			/* RESIZE */
			void	resize(size_type n, value_type val = value_type()) {
				if (n < this->size()) {
					for (size_type i = n; i < this->size(); i++) {
						this->_alloc.destroy(this->_array + i); }
				}
				else if (n > this->size()) {
					if (n > this->capacity()) {
						this->reserve(reserve_calc(n)); }
					for (size_type i = this->size(); i < n; i++) {
						this->_alloc.construct(this->_array + i, val); }
				}
				return;
			}

			/* RESERVE */
			size_type	reserve_calc(size_type n) {
				if (n > (this->size() * 2)) {
					return (n); }
				else {
					return (this->size() * 2); }
			}

			void	reserve(size_type n) {
				if (n > this->max_size()) {
					throw std::length_error("ft::vector::reserve ) n overflow ft::vector::_alloc::max_size()"); }
				if (n <= this->capacity()) {
					return; }
				pointer	ide = this->_alloc.allocate(n);
				if (!this->empty()) {
					for (size_type i = 0; i < this->size(); i++) {
						this->_alloc.construct(ide + i, *(this->_array + i));
						this->_alloc.destroy(this->_array + i);
					}
					this->_alloc.deallocate(this->_array, this->_capa);
				}
				this->_array = ide;
				this->_capa = n;
				return;
			}

			/*
				ELEMENT ACCESS
			*/

			/* OPERATOR[] */
			reference		operator[](size_type n) {
				return *(this->_array + n); }

			const_reference	operator[](size_type n) const {
				return *(this->_array + n); }

			/* AT */
			reference		at(size_type n) {
				if (n >= this->size()) {
					throw std::out_of_range("ft::vector::at ) n overflow ft::vector::_size"); }
				return (this->operator[](n));
			}

			const_reference	at(size_type n) const {
				if (n >= this->size()) {
					throw std::out_of_range("ft::vector::at ) n overflow ft::vector::_size"); }
				return (this->operator[](n));
			}

			/* FRONT */
			reference	front(void) {
				return *(this->begin()); }

			const_reference	front(void) const {
				return *(this->begin()); }

			/* BACK */
			reference		back(void) {
				return *(this->end() - 1); }

			const_reference	back(void) const {
				return *(this->end() - 1); }

			/*
				MODIFIERS
			*/

			/* ASSIGN */
			template <class InputIterator>
			void	assign(InputIterator first, InputIterator last,
			typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type = NULL) {
				difference_type	dif = last - first;
				if (dif > 0) {
					this->clear();
					this->_size = (size_type)dif;
					if (this->capacity() < dif) {
						reserve(reserve_calc(dif)); }
					for (; first != last; first++) {
						this->_alloc.construct(this->_array + (dif - (last - first)), *first); }
				}
				return;
			}

			void	assign(size_type n, const value_type &val) {
				this->clear();
				this->_size = n;
				if (this->capacity() < n) {
					reserve(reserve_calc(n)); }
				for (size_type i = 0; i < n; i++) {
					this->_alloc.construct(this->_array + i, val); }
				return;
			}

			/* PUSH_BACK */
			void	push_back(const value_type &val) {
				if (this->capacity() == 0) {
					reserve(1); }
				else if (this->size() + 1 > this->capacity()) {
					reserve(reserve_calc(this->size() + 1)); }
				this->_alloc.construct(this->_array + (this->size()), val);
				this->_size++;
				return;
			}

			/* POP_BACK */
			void	pop_back(void) {
				if (!this->empty()) {
					this->_size--;
					this->_alloc.destroy(this->end());
				}
				return;
			}

			/* INSERT */
			iterator	insert(iterator position, const value_type &val) {
				difference_type	place = position - this->begin();
				insert(position, 1, val);
				return (iterator(this->begin() + place));
			}
			
			void		insert(iterator position, size_type n, const value_type &val) {
				if (n == 0) {
					return; }
				difference_type	nbr_move = this->end() - position;
				difference_type	to_replace = position - this->begin();
				if (this->size() + n > this->capacity()) {
					reserve(reserve_calc(this->size() + n)); }
				if (nbr_move >= 0 && to_replace >= 0) {
					for (size_type i = 1; i <= (size_type)nbr_move; i++) {
						this->_alloc.construct(this->_array + (this->size() + n - i), *(this->_array + (this->size() - i)));
						this->_alloc.destroy(this->_array + (this->size() - i));
					}
					for (; n > 0; n--, to_replace++) {
						this->_alloc.construct(this->_array + to_replace, val); 
						this->_size++;
					}
				}
				return;
			}

			template <class InputIterator>
			void		insert(iterator position, InputIterator first, InputIterator last,
			typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type = NULL) {
				difference_type	n = (last - first) + 1;
				if (n > 0) {
					n--;
					difference_type	nbr_move = this->end() - position;
					difference_type	to_replace = position - this->begin();
					if (this->size() + n > this->capacity()) {
						reserve(reserve_calc(this->size() + n)); }
					if (nbr_move >= 0 && to_replace >= 0) {
						for (size_type i = 1; i <= (size_type)nbr_move; i++) {
							this->_alloc.construct(this->end() + (n - i), *(this->end() - i));
							this->_alloc.destroy(this->end() - i);
						}
						iterator	tmp = first;
						for (; n > 0; n--, to_replace++, tmp++) {
							this->_alloc.construct(this->_array + to_replace, *tmp); 
							this->_size++;
						}
					}
				}
				return;
			}

			/* ERASE */
			iterator	erase(iterator position) {
				iterator	ret();
				if (!this->empty()) {
					difference_type	nbr_move = this->end() - position;
					if (nbr_move >= 0) {
						for (size_type i = 0; i > (size_type)nbr_move; i++) {
							this->_alloc.destroy(this->end() - (nbr_move + i));
							this->_alloc.construct(this->end() - (nbr_move + i), *(this->end() - (nbr_move + i + 1)));
							if (i == 1) {
								ret = (this->end() - (nbr_move + i)); }
						}
						this->_size--;
					}
				}
				return (ret);
			}

			/* CLEAR */
			void	clear(void) {
				for (size_type i = 0; i < this->_size; i++) {
					this->_alloc.destroy(this->_array + i); }
				this->_size = 0;
				return;
			}

			/*
				ALLOCATOR
			*/

			allocator_type	get_allocator(void) const {
				return (this->_alloc); }

	};
}

#endif