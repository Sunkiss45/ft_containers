/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:45:40 by ebarguil          #+#    #+#             */
/*   Updated: 2023/03/04 18:40:05 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <memory>
#include "vector_iterator.hpp"

namespace ft
{
	template < class T, class Alloc = allocator<T> >
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
			// typedef typename ft::reverse_iterator<iterator>					reverse_iterator;
			// typedef typename ft::reverse_iterator<const_iterator>			const_reverse_iterator;
			typedef typename ft::iterator_traits<iterator>::difference_type	difference_type;
			typedef	std::size_t													size_type;

		private:
			allocator_type	_alloc;
			pointer			_array;
			size_type		_size;
			size_type		_capa;

		public:
			
			/*
				DEFAULT CONSTRUCT - DESTRUCT - COPY CONSTRUCT - ASSIGN CONSTRUCT
			*/

			explicit vector(const allocator_type& alloc = allocator_type())
			: _alloc(alloc), _array(NULL), _size(0), _capa(0) {};

			// explicit vector(size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
			// : _alloc(alloc), _array(NULL), _size(n), _capa(n) {
			// 	this->_array = this->_alloc.allocate(n);
			// 	if (n > 0) {
			// 		for (size_type i = 0; i < n; i++) {
			// 			this->_alloc.construct(this->_array + i, val);
			// 		}
			// 	}
			// };

			// template <class InputIterator>
			// vector(InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type())
			// : _alloc(alloc), _array(NULL), _size(0), _capa(0) {
			// 	difference_type	dif = last - first;
			// 	if (dif > 0) {
			// 		this->_size = (size_type)dif;
			// 		this->_capa = (size_type)dif;
			// 		this->_array = this->_alloc.allocate(this->_capa);
			// 		for (void; first != last; first++) {
			// 			this->_alloc.construct(this->_array + (dif - (last - first)), *first);
			// 		}
			// 	}
			// };

			// vector(const vector &x)
			// : alloc(x.get_allocator()), _array(NULL), _size(x.size()), _capa(x.capacity()) {
			// 	if (this->_size > 0) {
			// 		this->_array = this->_alloc.allocate(_capa);
			// 		for (pointer tmp = x.begin(); tmp < x.end(); tmp++) {
			// 			this->_alloc.construct(this->_array)
			// 		}
			// 	}
			// };

			~vector(void) {
				clear();
				if (this->_capa > 0) {
					this->_alloc.deallocate(this->_array, this->_capa);
				}
			};

			/*
				CAPACITY
			*/
			
			

			/*
				MODIFIERS
			*/

			void push_back(const value_type& val) {
				this->_size++;
				if (this->_size > this->capa) {

				}
			};

	};
}

#endif