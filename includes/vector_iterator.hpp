/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_iterator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:59:12 by acoinus           #+#    #+#             */
/*   Updated: 2023/03/02 18:07:11 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_ITERATOR_HPP
# define VECTOR_ITERATOR_HPP

# include <cstddef>

namespace ft
{
	template <class Category, class T, class Distance = ptrdiff_t, class Pointer = T*, class Reference = T&>
	struct iterator
	{
		typedef Category		iterator_category;
		typedef T				value_type;
		typedef Distance		difference_type;
		typedef Pointer			pointer;
		typedef Reference		reference;
	};

	template <class Iterator>
	struct iterator_traits
	{
		typedef Iterator::difference_type	difference_type;
		typedef Iterator::value_type		value_type;
		typedef Iterator::Pointer			pointer;
		typedef Iterator::Reference			reference;
		typedef Iterator::iterator_category	iterator_category;
	};

	template <class T>
	struct iterator_traits<T*>
	{
		typedef ptrdiff_t					difference_type;
		typedef T							value_type;
		typedef T*							pointer;
		typedef T&							reference;
		typedef random_access_iterator_tag	iterator_category;
	};

	template <class T>
	struct iterator_traits<const T*>
	{
		typedef ptrdiff_t					difference_type;
		typedef T							value_type;
		typedef const T*					pointer;
		typedef const T&					reference;
		typedef random_access_iterator_tag	iterator_category;
	};
	
	struct output_iterator_tag {};
	struct input_iterator_tag {};
	struct forward_iterator_tag : public input_iterator_tag {};
	struct bidirectional_iterator_tag : public forward_iterator_tag {};
	struct random_access_iterator_tag : public bidirectional_iterator_tag {};

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

			vector_iterator &operator=(vector_iterator const &other)
			{
				if (*this != other)
					_ptr = other._ptr;
				return (this);
			}

			/*
				EQUALITY - INEQUALITY
			*/

			bool	operator==(vector_iterator const &other)
			{
				return (this->_ptr == other._ptr);
			}

			bool	operator!=(vector_iterator const &other)
			{
				return (this->_ptr != other._ptr);
			}

			/*
				DEREFERENCED
			*/

			reference	operator*(void)
			{
				return(this->*_ptr);
			}

			reference	operator->(void)
			{
				return &(operator*());
			}

	};
}

#endif
