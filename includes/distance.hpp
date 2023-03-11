/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:56:23 by ebarguil          #+#    #+#             */
/*   Updated: 2023/03/11 15:00:22 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISTANCE_HPP
# define DISTANCE_HPP

#include "iterator.hpp"

namespace ft
{
	template<class InputIt>
	typename ft::iterator_traits<InputIt>::difference_type	distance(InputIt first, InputIt last) {
		typename ft::iterator_traits<InputIt>::difference_type	ret = 0;
		for (; first != last; first++) {
			ret++; }
		return (ret);
	}
}

#endif /* DISTANCE_HPP */