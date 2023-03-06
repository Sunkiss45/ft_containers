/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_iterator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:59:12 by acoinus           #+#    #+#             */
/*   Updated: 2023/03/06 16:24:09 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_ITERATOR_HPP
# define VECTOR_ITERATOR_HPP

#include "iterator.hpp"

namespace ft
{
	template <typename T>
	class vector_iterator : public ft::iterator<ft::random_access_iterator_tag, T>
	{

		public:
			typedef typename ft::iterator<ft::random_access_iterator_tag, T>::iterator_category	iterator_category;
			typedef typename ft::iterator<ft::random_access_iterator_tag, T>::value_type		value_type;
			typedef typename ft::iterator<ft::random_access_iterator_tag, T>::difference_type	difference_type;
			typedef typename ft::iterator<ft::random_access_iterator_tag, T>::pointer			pointer;
			typedef typename ft::iterator<ft::random_access_iterator_tag, T>::reference			reference;

		private:
			pointer	_ptr;

		public:

			/*
				DEFAULT CONSTRUCT - DESTRUCT - COPY CONSTRUCT - ASSIGN CONSTRUCT
			*/

			vector_iterator(void) : _ptr(0) {};

			virtual ~vector_iterator(void) {};

			vector_iterator(vector_iterator const &other) : _ptr(other._ptr) {};

			vector_iterator &operator=(vector_iterator const &other) {
				if (this != &other)
					_ptr = other._ptr;
				return (*this); }

			/*
				GETTER - DEREFERENCED - OFFSET DEREFERENCE
			*/

			pointer		base(void) const {
				return(this->_ptr); }

			reference	operator*(void) const {
				return(this->*_ptr); }

			reference	operator->(void) const {
				return &(operator*()); }

			reference	operator[](difference_type n) const {
				return *(*this + n); }

			/*
				INCREMENTATION - DECREMENTATION
			*/

			vector_iterator	&operator++(void) {
				++this->_ptr;
				return(*this); }

			vector_iterator	&operator++(int) {
				vector_iterator tmp = *this;
				++this->_ptr;
				return(tmp); }

			vector_iterator	&operator--(void) {
				--this->_ptr;
				return(*this); }

			vector_iterator	&operator--(int) {
				vector_iterator tmp = *this;
				--this->_ptr;
				return(tmp); }

			/*
				ARITHMETIC
			*/

			vector_iterator	operator+(difference_type n) const {
				return(vector_iterator(this->_ptr + n)); }

			vector_iterator	&operator+=(difference_type n) {
				this->_ptr += n;
				return(*this); }

			friend ft::vector_iterator<value_type>	operator+(const difference_type n, const ft::vector_iterator<value_type> &rhs) {
				return vector_iterator<value_type>(n + rhs.base()); }

			friend ft::vector_iterator<value_type>	operator+(const ft::vector_iterator<value_type> &lhs, const difference_type n) {
				return vector_iterator<value_type>(lhs.base() + n); }

			friend ft::vector_iterator<value_type>	operator+(const ft::vector_iterator<value_type> &lhs, const ft::vector_iterator<value_type> &rhs) {
				return vector_iterator<value_type>(lhs.base() + rhs.base()); }


			vector_iterator	operator-(difference_type n) const {
				return(vector_iterator(this->_ptr - n)); }

			vector_iterator	&operator-=(difference_type n) {
				this->_ptr -= n;
				return(*this); }

			friend difference_type	operator-(const difference_type n, const ft::vector_iterator<value_type> &rhs) {
				return (n - rhs.base()); }

			friend difference_type	operator-(const ft::vector_iterator<value_type> &lhs, const difference_type n) {
				return (lhs.base() - n); }

			friend difference_type	operator-(const ft::vector_iterator<value_type> &lhs, const ft::vector_iterator<value_type> &rhs) {
				return (lhs.base() - rhs.base()); }

	};

	/*
		EQUALITY - INEQUALITY
	*/

	template<class Iter1, class Iter2>
	bool	operator==(ft::vector_iterator<Iter1> const &lhs, ft::vector_iterator<Iter2> const &rhs) {
		return (lhs.base() == rhs.base()); }

	template<class Iter1, class Iter2>
	bool	operator!=(ft::vector_iterator<Iter1> const &lhs, ft::vector_iterator<Iter2> const &rhs) {
		return (lhs.base() != rhs.base()); }

	template<class Iter1, class Iter2>
	bool	operator<(ft::vector_iterator<Iter1> const &lhs, ft::vector_iterator<Iter2> const &rhs) {
		return (lhs.base() < rhs.base()); }

	template<class Iter1, class Iter2>
	bool	operator<=(ft::vector_iterator<Iter1> const &lhs, ft::vector_iterator<Iter2> const &rhs) {
		return (lhs.base() <= rhs.base()); }

	template<class Iter1, class Iter2>
	bool	operator>(ft::vector_iterator<Iter1> const &lhs, ft::vector_iterator<Iter2> const &rhs) {
		return (lhs.base() > rhs.base()); }

	template<class Iter1, class Iter2>
	bool	operator>=(ft::vector_iterator<Iter1> const &lhs, ft::vector_iterator<Iter2> const &rhs) {
		return (lhs.base() >= rhs.base()); }
}

#endif /* VECTOR_ITERATOR_HPP */