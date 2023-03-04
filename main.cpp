/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:35:05 by ebarguil          #+#    #+#             */
/*   Updated: 2023/03/04 19:02:38 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "includes/iterator.hpp"
// #include "includes/vector_iterator.hpp"
#include <iostream>
#include <vector>

int	main(void) {

	std::vector<int>			std_vec;
	std_vec.insert(std_vec.begin(), 24, 42);
	std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	std_vec.push_back(1);
	std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	std_vec.push_back(3);
	std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	std_vec.push_back(5);
	std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	std_vec.push_back(5);
	std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;

	std_vec.insert(std_vec.begin(), 24, 42);
	std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	std_vec.push_back(5);
	std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;

	return (0); }