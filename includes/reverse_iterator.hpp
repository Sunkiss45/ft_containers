/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:37:56 by ebarguil          #+#    #+#             */
/*   Updated: 2023/03/10 19:25:48 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REVERSE_ITERATOR_HPP
# define REVERSE_ITERATOR_HPP

# include "iterator.hpp"

namespace ft
{
	template <typename Iterator>
	class reverse_iterator
	{
		public:
			typedef Iterator														iterator_type;
			typedef typename ft::iterator_traits<iterator_type>::iterator_category	iterator_category;
			typedef typename ft::iterator_traits<iterator_type>::value_type			value_type;
			typedef typename ft::iterator_traits<iterator_type>::difference_type	difference_type;
			typedef typename ft::iterator_traits<iterator_type>::pointer			pointer;
			typedef typename ft::iterator_traits<iterator_type>::reference			reference;
		
		private:
			iterator_type	_iter;
		
		public:
			
			/*
				CONSTRUCTOR - DESTRUCTOR
			*/

			/* DEFAULT */
			reverse_iterator(void) : _iter(NULL) {};

			/* INITIALIZATION */
			explicit reverse_iterator(iterator_type it) : _iter(it) {};

			/* COPY */
			template<class Iter>
			reverse_iterator(const reverse_iterator<Iter> &rev_it) : _iter(rev_it.base()) {};

			/* DESTRUCTOR */
			virtual ~reverse_iterator(void) {};

			/* OPERATOR = */

			template<class Iter>
			reverse_iterator &operator=(const reverse_iterator<Iter> &cpy) {
				if (this != *cpy) {
					this->_iter = cpy.base(); }
				return (*this);
			}

			/*
				MEMBER FUNCTIONS
			*/

			iterator_type	base(void) const {
				return (this->_iter); }

			reference	operator*(void) const {
				Iterator tmp = this->_iter;
				return (*--tmp);
			}

			pointer	operator->(void) const {
				Iterator tmp = this->_iter;
				return &(*--tmp);
			}

			reference	operator[](difference_type n) const {
				return *(*this + n); }

			/*
				ARITHMETIC
			*/

			reverse_iterator	operator+(difference_type n) const {
				return (reverse_iterator(this->_iter - n)); }

			reverse_iterator	&operator++() {
				this->_iter--;
				return (*this);
			}

			reverse_iterator	operator++(int) {
				reverse_iterator tmp(*this);
				this->operator++();
				return (tmp);
			}

			reverse_iterator	&operator+=(difference_type n) {
				this->_iter -= n;
				return (*this);
			}

			reverse_iterator	operator-(difference_type n) const {
				return (reverse_iterator(this->_iter + n)); }

			reverse_iterator	&operator--() {
				this->_iter++;
				return (*this);
			}

			reverse_iterator	operator--(int) {
				reverse_iterator tmp(*this);
				this->operator--();
				return (tmp);
			}

			reverse_iterator	&operator-=(difference_type n) {
				this->_iter += n;
				return (*this);
			}
	};

	/*
		NON-MEMBER FUNCTIONS
	*/

	template <class Iterator1, class Iterator2>
	bool operator==(const ft::reverse_iterator<Iterator1>& lhs, const ft::reverse_iterator<Iterator2>& rhs) {
		return (lhs.base() == rhs.base()); }

	template <class Iterator1, class Iterator2>
	bool operator!=(const ft::reverse_iterator<Iterator1>& lhs, const ft::reverse_iterator<Iterator2>& rhs) {
		return (lhs.base() != rhs.base()); }

	template <class Iterator1, class Iterator2>
	bool operator<(const ft::reverse_iterator<Iterator1>& lhs, const ft::reverse_iterator<Iterator2>& rhs) {
		return (lhs.base() > rhs.base()); }

	template <class Iterator1, class Iterator2>
	bool operator<=(const ft::reverse_iterator<Iterator1>& lhs, const ft::reverse_iterator<Iterator2>& rhs) {
		return (lhs.base() >= rhs.base()); }

	template <class Iterator1, class Iterator2>
	bool operator>(const ft::reverse_iterator<Iterator1>& lhs, const ft::reverse_iterator<Iterator2>& rhs) {
		return (lhs.base() < rhs.base()); }

	template <class Iterator1, class Iterator2>
	bool operator>=(const ft::reverse_iterator<Iterator1>& lhs, const ft::reverse_iterator<Iterator2>& rhs) {
		return (lhs.base() <= rhs.base()); }

	template <class Iterator1, class Iterator2>
	typename ft::reverse_iterator<Iterator1>::difference_type operator-(const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs) {
		return (rhs.base() - lhs.base()); }

	template <class Iterator>
	ft::reverse_iterator<Iterator>	operator+(typename ft::reverse_iterator<Iterator>::difference_type n, const ft::reverse_iterator<Iterator>& rev_it) {
		return (rev_it + n); }
}

#endif /* REVERSE_ITERATOR_HPP */