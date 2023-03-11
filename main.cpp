/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:35:05 by ebarguil          #+#    #+#             */
/*   Updated: 2023/03/11 18:03:56 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "includes/iterator.hpp"
// #include "includes/vector_iterator.hpp"
#include <iostream>
#include <vector>
#include <list>

#include "includes/vector.hpp"


// int	main(void) {

	// std::vector<int>			std_vec;
	// std_vec.insert(std_vec.begin(), 24, 42);
	// std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_vec.push_back(1);
	// std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_vec.push_back(3);
	// std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_vec.push_back(5);
	// std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_vec.push_back(5);
	// std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;

	// std_vec.insert(std_vec.begin(), 24, 42);
	// std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_vec.push_back(5);
	// std::cout << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;


	// std::vector<int>	std_vec;
	// for (int i = 1; i <= 10; i++) {
	// 	std_vec.push_back(i); }
	// std::vector<int>::difference_type	std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;

	// std::vector<int>::iterator	std_it = std_vec.begin();
	// std::vector<int>::iterator	std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;
	
	// std_vec.insert(std_vec.end(), 5, 101);
	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// std_vec.insert(std_vec.begin(), 2, 42);
	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// std_vec.insert(std_vec.begin() + 6, 18, 21);
	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// std_vec.insert(std_vec.begin() + 15, 1, 92);
	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// std::vector<int>::iterator	std_first = std_vec.begin() + 2;
	// std::vector<int>::iterator	std_last = std_vec.begin() + 5;
	// std_vec.insert(std_vec.begin(), std_first, std_last);
	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// std::vector<int>	std_vec_c(std_vec);
	// std_first = std_vec_c.begin() + 5;
	// std_last = std_vec_c.begin() + 8;
	// std_vec.insert(std_vec.begin(), std_first, std_last);
	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// std_vec.erase(std_vec.begin());
	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// std_vec.erase(std_vec.begin() + 7);
	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// std_vec.erase(std_vec.begin() + 1, std_vec.end() - 1);
	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;


	// std::cout << std::endl;


	// ft::vector<int>	ft_vec;
	// for (int i = 1; i <= 10; i++) {
	// 	ft_vec.push_back(i); }
	// ft::vector<int>::difference_type	ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;

	// ft::vector<int>::iterator	ft_it = ft_vec.begin();
	// ft::vector<int>::iterator	ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;
	
	// ft_vec.insert(ft_vec.end(), 5, 101);
	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// ft_vec.insert(ft_vec.begin(), 2, 42);
	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// ft_vec.insert(ft_vec.begin() + 6, 18, 21);
	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// ft_vec.insert(ft_vec.begin() + 15, 1, 92);
	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// ft::vector<int>::iterator	ft_first = ft_vec.begin() + 2;
	// ft::vector<int>::iterator	ft_last = ft_vec.begin() + 5;
	// ft_vec.insert(ft_vec.begin(), ft_first, ft_last);
	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// ft::vector<int>	ft_vec_c(ft_vec);
	// ft_first = ft_vec_c.begin() + 5;
	// ft_last = ft_vec_c.begin() + 8;
	// ft_vec.insert(ft_vec.begin(), ft_first, ft_last);
	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// ft_vec.erase(ft_vec.begin());
	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// ft_vec.erase(ft_vec.begin() + 7);
	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// ft_vec.erase(ft_vec.begin() + 1, ft_vec.end() - 1);
	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;


	// std::vector<int>	std_vec;
	// for (int i = 1; i <= 10; i++) {
	// 	std_vec.push_back(i * 10); }
	// std::vector<int>::difference_type	std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std::vector<int>::iterator	std_it = std_vec.begin();
	// std::vector<int>::iterator	std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// std_vec.assign(4, 42);
	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// std_vec.assign(std_vec.begin(), std_vec.end());
	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "[ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;


	// std::cout << std::endl;


	// ft::vector<int>	ft_vec;
	// for (int i = 1; i <= 10; i++) {
	// 	ft_vec.push_back(i * 10); }
	// ft::vector<int>::difference_type	ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft::vector<int>::iterator	ft_it = ft_vec.begin();
	// ft::vector<int>::iterator	ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// ft_vec.assign(4, 42);
	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// ft_vec.assign(ft_vec.begin(), ft_vec.end());
	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "[ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;


	// std::vector<int>	std_vec;
	// for (int i = 1; i <= 10; i++) {
	// 	std_vec.push_back(i * 10); }
	// std::vector<int>::difference_type	std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std::vector<int>::iterator	std_it = std_vec.begin();
	// std::vector<int>::iterator	std_ite = std_vec.end();
	// std::cout << "std_vec : [ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// std::vector<int>	std_vec_c;
	// for (int i = 1; i <= 20; i++) {
	// 	std_vec_c.push_back(i * 5); }
	// std_dif = std_vec_c.end() - std_vec_c.begin();
	// std::cout << std_dif << " " << std_vec_c.size() << " " << std_vec_c.capacity() << " " << std_vec_c.max_size() << std::endl;
	// std_it = std_vec_c.begin();
	// std_ite = std_vec_c.end();
	// std::cout << "std_vec_c : [ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// std_vec.swap(std_vec_c);

	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "std_vec : [ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;
	// std_dif = std_vec_c.end() - std_vec_c.begin();
	// std::cout << std_dif << " " << std_vec_c.size() << " " << std_vec_c.capacity() << " " << std_vec_c.max_size() << std::endl;
	// std_it = std_vec_c.begin();
	// std_ite = std_vec_c.end();
	// std::cout << "std_vec_c : [ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// swap(std_vec, std_vec_c);

	// std_dif = std_vec.end() - std_vec.begin();
	// std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	// std_it = std_vec.begin();
	// std_ite = std_vec.end();
	// std::cout << "std_vec : [ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;
	// std_dif = std_vec_c.end() - std_vec_c.begin();
	// std::cout << std_dif << " " << std_vec_c.size() << " " << std_vec_c.capacity() << " " << std_vec_c.max_size() << std::endl;
	// std_it = std_vec_c.begin();
	// std_ite = std_vec_c.end();
	// std::cout << "std_vec_c : [ ";
	// for (; std_it != std_ite; ++std_it) {
	// 	std::cout << *std_it << " "; }
	// std::cout << "]" << std::endl << std::endl;


	// std::cout << std::endl << std::endl;


	// ft::vector<int>	ft_vec;
	// for (int i = 1; i <= 10; i++) {
	// 	ft_vec.push_back(i * 10); }
	// ft::vector<int>::difference_type	ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft::vector<int>::iterator	ft_it = ft_vec.begin();
	// ft::vector<int>::iterator	ft_ite = ft_vec.end();
	// std::cout << "ft_vec : [ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// ft::vector<int>	ft_vec_c;
	// for (int i = 1; i <= 20; i++) {
	// 	ft_vec_c.push_back(i * 5); }
	// ft_dif = ft_vec_c.end() - ft_vec_c.begin();
	// std::cout << ft_dif << " " << ft_vec_c.size() << " " << ft_vec_c.capacity() << " " << ft_vec_c.max_size() << std::endl;
	// ft_it = ft_vec_c.begin();
	// ft_ite = ft_vec_c.end();
	// std::cout << "ft_vec_c : [ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// ft_vec.swap(ft_vec_c);

	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "ft_vec : [ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;
	// ft_dif = ft_vec_c.end() - ft_vec_c.begin();
	// std::cout << ft_dif << " " << ft_vec_c.size() << " " << ft_vec_c.capacity() << " " << ft_vec_c.max_size() << std::endl;erase
	// ft_it = ft_vec_c.begin();
	// ft_ite = ft_vec_c.end();
	// std::cout << "ft_vec_c : [ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

	// swap(ft_vec, ft_vec_c);

	// ft_dif = ft_vec.end() - ft_vec.begin();
	// std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	// ft_it = ft_vec.begin();
	// ft_ite = ft_vec.end();
	// std::cout << "ft_vec : [ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;
	// ft_dif = ft_vec_c.end() - ft_vec_c.begin();
	// std::cout << ft_dif << " " << ft_vec_c.size() << " " << ft_vec_c.capacity() << " " << ft_vec_c.max_size() << std::endl;
	// ft_it = ft_vec_c.begin();
	// ft_ite = ft_vec_c.end();
	// std::cout << "ft_vec_c : [ ";
	// for (; ft_it != ft_ite; ++ft_it) {
	// 	std::cout << *ft_it << " "; }
	// std::cout << "]" << std::endl << std::endl;

#define TESTED_TYPE char

void	ft_printme(ft::vector<TESTED_TYPE> ft_vec) {
	ft::vector<TESTED_TYPE>::difference_type	ft_dif = ft_vec.end() - ft_vec.begin();
	std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	ft::vector<TESTED_TYPE>::iterator	ft_it = ft_vec.begin();
	ft::vector<TESTED_TYPE>::iterator	ft_ite = ft_vec.end();
	std::cout << "ft_vec : [ ";
	for (; ft_it != ft_ite; ++ft_it) {
		std::cout << *ft_it << " "; }
	std::cout << "]" << std::endl << std::endl;
}

void	std_printme(std::vector<TESTED_TYPE> std_vec) {
	std::vector<TESTED_TYPE>::difference_type	std_dif = std_vec.end() - std_vec.begin();
	std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	std::vector<TESTED_TYPE>::iterator	std_it = std_vec.begin();
	std::vector<TESTED_TYPE>::iterator	std_ite = std_vec.end();
	std::cout << "std_vec : [ ";
	for (; std_it != std_ite; ++std_it) {
		std::cout << *std_it << " "; }
	std::cout << "]" << std::endl << std::endl;
}

template <typename T>
class foo {
	public:
		typedef T	value_type;

		foo(void) : value(), _verbose(false) { };
		foo(value_type src, const bool verbose = false) : value(src), _verbose(verbose) { };
		foo(foo const &src, const bool verbose = false) : value(src.value), _verbose(verbose) { };
		~foo(void) { if (this->_verbose) std::cout << "~foo::foo()" << std::endl; };
		void m(void) { std::cout << "foo::m called [" << this->value << "]" << std::endl; };
		void m(void) const { std::cout << "foo::m const called [" << this->value << "]" << std::endl; };
		foo &operator=(value_type src) { this->value = src; return *this; };
		foo &operator=(foo const &src) {
			if (this->_verbose || src._verbose)
				std::cout << "foo::operator=(foo) CALLED" << std::endl;
			this->value = src.value;
			return *this;
		};
		value_type	getValue(void) const { return this->value; };
		void		switchVerbose(void) { this->_verbose = !(this->_verbose); };

		operator value_type(void) const {
			return value_type(this->value);
		}
	private:
		value_type	value;
		bool		_verbose;
};

#include <cstdlib>
#include <limits>
#include <sstream>
#include <string>

template <typename ForwardIt, typename T>
void iota(ForwardIt first, ForwardIt last, T value = T())
{
    while (first != last) {
        *first++ = value;
        ++value;
    }
}

template <typename T>
void init_array(T* arr, std::size_t size)
{
    iota(arr, arr + size, (T)rand());
}

#define SETUP_ARRAY(type, name, size)                                                              \
    type name[size];                                                                               \
    init_array(name, size);

#define SETUP_ARRAYS()                                                                             \
    SETUP_ARRAY(long, s_long, 32);                                                                 \
    SETUP_ARRAY(long, b_long, 64);                                                                 \
    SETUP_ARRAY(int, s_int, 32);                                                                   \
    SETUP_ARRAY(int, b_int, 64);                                                                   \
    SETUP_ARRAY(double, s_double, 32);                                                             \
    SETUP_ARRAY(double, b_double, 64);                                                             \
    char s_char[32];                                                                               \
    iota(s_char, s_char + 32, '@');                                                                \
    char b_char[64];                                                                               \
    iota(b_char, b_char + 64, '$');                                                                \
    std::size_t s_size = 32;                                                                       \
    std::size_t b_size = 64;                                                                       \
    (void)s_size;                                                                                  \
    (void)b_size;                                                                                  \
    std::string s_string[32] = {                                                                   \
        "QExoqp0nICr0sXsHqty2", "naax9QcpJhvaL7DezsNQ", "25ZTtB6wbptfbxM8AvHB",                    \
        "tShYNtc0MkdjqLrOatgz", "7Z3kf1Qec0NnsLSEpbOt", "WhkSNrKJC966fvjZ2Or1",                    \
        "8vlxlFRRgW7yYj4GO7dt", "5sq1aoT8zP0HaHj3nFOK", "61Dv31GYZhkgjKCErpng",                    \
        "l0IIcWWHhOcPzoxEamQM", "bE1RYclskwXlhCm46YFs", "kXeoi5qz94JYPqSDTs79",                    \
        "TFsQP1dz8VVos9KzUpY0", "b3wYQR7An193gjgYuRj3", "xSmyNsnSJ47jLqrvbpyr",                    \
        "guAIP2Wq43Gf8VhHsyu5", "yT6c2loPebHovnq9BQog", "3qvU1xcVm2g1DKFDlqh4",                    \
        "L0q8RR9P41VD4sVjdnWl", "YdjESsIZM4b1oGQPjpBe", "l1ZVQbWKw7brHUSimJgq",                    \
        "xdn0cf4vqRzpfXWtl10G", "lYnZvpqaV0s8DowMZwzV", "8P1cyKrwJNLoJyvLjYqO",                    \
        "4MhOXNbAX23CEijO5cRT", "tHe3miAwCOVQbuoLaEP2", "l6uNLsc8fiLl3eWoG6j6",                    \
        "477xt6l0lph9ALQdr4HX", "D9UJNe4s8YF02LhrwOdl", "dLCisBNOdE8yugntu6cj",                    \
        "YvY4aQFHgAuagn4dFLO1", "eGR6Dtv7LW75qlV5Fkik"                                             \
    };                                                                                             \
    std::string b_string[64] = {                                                                   \
        "uvg6KqtcgduR31n3ajsv", "wbiAcjgojb9JOagZwyMn", "ATZKCzaPOqgkhPjwuGlf",                    \
        "MOhaJs56yjOw8f6nLPRA", "0gyB2Tr42v6awMw2nK7J", "e6GsiLFUuoDpVFEhJKZ1",                    \
        "z0jXAhiV9keBsaLOY0Xf", "P68p2ZAosHJdmoZh1C7N", "Pu3EuZVeY0TCO3ojdK0t",                    \
        "z7jCHMooHCS73M8GygKB", "uT4KoK83JrZxZjkul7ty", "g8gfrZoY5XwfzRusvHvv",                    \
        "7PGmkM0OSRnYREt9mFIP", "q1od7mBIpPEsCtpF9kdw", "XQo0LWId5TdZnLnpUNOb",                    \
        "U0m1R0kFFhAFyS6hmHHw", "K0lPKfxJxIOnE8QB90xn", "cZ5xyQifMJhrKxqBK9A7",                    \
        "cFBiwjfYw7Js6qEGy5Kt", "1tW0KWfXxeFO69tByqcE", "3Fvq9NxBrhPXHe0IlIVx",                    \
        "MSRDjdFRvHAhFGhiMtDe", "zGm2joMh71jQkYzg5L4V", "Mq4RRaeLvSAO0z2ibp8Q",                    \
        "WnLFYnQKP8TNJkqVVbUg", "E98UphbbVSzrW5Mzurmg", "F8HRxeEcaTZDkFPkioij",                    \
        "jmUVl4Q8X5BwVNzXN219", "n7Xp4w4FwzGKit7AI4SO", "4MxXYr6rKOcXLt9UkVd2",                    \
        "4RVTDsADtRyboaai9d29", "XaSqsrrtdhAfFoJIc5KK", "9Z9jdVCrTT09bg348ceb",                    \
        "I6uqLG9dO5mfNdSMwOYm", "UwMTzJPlbnhgwbHpDi6w", "DebjMP9afncYE6GhhO00",                    \
        "YGPuscYDiGfAjY1UWST0", "K6gbvgGjVZgEFUDlkdSk", "8xCBPI0w6TpC0RA62c2W",                    \
        "fYMxkNwmKg3moP8KvD9v", "QpPdhwhEYjIugg3OPcPH", "qQBXjSn43I3EMP54SyxZ",                    \
        "7qvdKwoW1CQEZTWPvuSC", "rCT212rdYO0zTGHXesKg", "dBHvlHsBwcR9MkkenYYG",                    \
        "NQiSlergqR8fVbOeivLj", "xYVqsV147UIe7jVBVwXo", "tcxayO4DdEJ885TbqUMy",                    \
        "9TGSMTD8U8ksRpHqq0cL", "TIJ16jCv9BSUiWvhbF9T", "BM9GL2ig1hePkA6lM6Ck",                    \
        "TfJTYB9JQMU6CGcYg20Q", "Fg6e5YT2FQbpTZNTDqdo", "LI5q6ml40MeE9H1dPb93",                    \
        "OaxJUSm3nYN9Y8Ela7sS", "BgBeODAwXz7xJo50Rwqd", "xdkgKj1dEoJ6zuVhkvvo",                    \
        "olIewtUEvXJgs1lB9bCn", "dTsPDS0x2uXtcgOIJHb8", "DYvJ2phLppGNZKboTBrd",                    \
        "DjNFMtt9PxkzqvWBHI6j", "1Z3YkeTFlPniKnzFhzgu", "76XqQg6hqMf5IXxKPOEs",                    \
        "gzaapTWW7i9EZjjzLeK6"                                                                     \
    };                                                                                             \
    (void)s_string;                                                                                \
    (void)b_string;




int	main() {

	SETUP_ARRAYS();
    {
        // This test checks if vector works with iterators tagged as std::input_iterator_tag
        std::istringstream str("1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ");
        std::istreambuf_iterator<char> it(str), end;

        ft::vector<char> v(it, end);

        ft_printme(v);
    }

	return (0); }