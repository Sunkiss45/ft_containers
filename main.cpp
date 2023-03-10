/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <ebarguil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:35:05 by ebarguil          #+#    #+#             */
/*   Updated: 2023/03/10 15:47:22 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include "includes/iterator.hpp"
// #include "includes/vector_iterator.hpp"
#include <iostream>
#include <vector>

#include "includes/vector.hpp"


int	main(void) {

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


	std::vector<int>	std_vec;
	for (int i = 1; i <= 10; i++) {
		std_vec.push_back(i * 10); }
	std::vector<int>::difference_type	std_dif = std_vec.end() - std_vec.begin();
	std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	std::vector<int>::iterator	std_it = std_vec.begin();
	std::vector<int>::iterator	std_ite = std_vec.end();
	std::cout << "std_vec : [ ";
	for (; std_it != std_ite; ++std_it) {
		std::cout << *std_it << " "; }
	std::cout << "]" << std::endl << std::endl;

	std::vector<int>	std_vec_c;
	for (int i = 1; i <= 20; i++) {
		std_vec_c.push_back(i * 5); }
	std_dif = std_vec_c.end() - std_vec_c.begin();
	std::cout << std_dif << " " << std_vec_c.size() << " " << std_vec_c.capacity() << " " << std_vec_c.max_size() << std::endl;
	std_it = std_vec_c.begin();
	std_ite = std_vec_c.end();
	std::cout << "std_vec_c : [ ";
	for (; std_it != std_ite; ++std_it) {
		std::cout << *std_it << " "; }
	std::cout << "]" << std::endl << std::endl;

	std_vec.swap(std_vec_c);

	std_dif = std_vec.end() - std_vec.begin();
	std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	std_it = std_vec.begin();
	std_ite = std_vec.end();
	std::cout << "std_vec : [ ";
	for (; std_it != std_ite; ++std_it) {
		std::cout << *std_it << " "; }
	std::cout << "]" << std::endl << std::endl;
	std_dif = std_vec_c.end() - std_vec_c.begin();
	std::cout << std_dif << " " << std_vec_c.size() << " " << std_vec_c.capacity() << " " << std_vec_c.max_size() << std::endl;
	std_it = std_vec_c.begin();
	std_ite = std_vec_c.end();
	std::cout << "std_vec_c : [ ";
	for (; std_it != std_ite; ++std_it) {
		std::cout << *std_it << " "; }
	std::cout << "]" << std::endl << std::endl;

	swap(std_vec, std_vec_c);

	std_dif = std_vec.end() - std_vec.begin();
	std::cout << std_dif << " " << std_vec.size() << " " << std_vec.capacity() << " " << std_vec.max_size() << std::endl;
	std_it = std_vec.begin();
	std_ite = std_vec.end();
	std::cout << "std_vec : [ ";
	for (; std_it != std_ite; ++std_it) {
		std::cout << *std_it << " "; }
	std::cout << "]" << std::endl << std::endl;
	std_dif = std_vec_c.end() - std_vec_c.begin();
	std::cout << std_dif << " " << std_vec_c.size() << " " << std_vec_c.capacity() << " " << std_vec_c.max_size() << std::endl;
	std_it = std_vec_c.begin();
	std_ite = std_vec_c.end();
	std::cout << "std_vec_c : [ ";
	for (; std_it != std_ite; ++std_it) {
		std::cout << *std_it << " "; }
	std::cout << "]" << std::endl << std::endl;


	std::cout << std::endl << std::endl;


	ft::vector<int>	ft_vec;
	for (int i = 1; i <= 10; i++) {
		ft_vec.push_back(i * 10); }
	ft::vector<int>::difference_type	ft_dif = ft_vec.end() - ft_vec.begin();
	std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	ft::vector<int>::iterator	ft_it = ft_vec.begin();
	ft::vector<int>::iterator	ft_ite = ft_vec.end();
	std::cout << "ft_vec : [ ";
	for (; ft_it != ft_ite; ++ft_it) {
		std::cout << *ft_it << " "; }
	std::cout << "]" << std::endl << std::endl;

	ft::vector<int>	ft_vec_c;
	for (int i = 1; i <= 20; i++) {
		ft_vec_c.push_back(i * 5); }
	ft_dif = ft_vec_c.end() - ft_vec_c.begin();
	std::cout << ft_dif << " " << ft_vec_c.size() << " " << ft_vec_c.capacity() << " " << ft_vec_c.max_size() << std::endl;
	ft_it = ft_vec_c.begin();
	ft_ite = ft_vec_c.end();
	std::cout << "ft_vec_c : [ ";
	for (; ft_it != ft_ite; ++ft_it) {
		std::cout << *ft_it << " "; }
	std::cout << "]" << std::endl << std::endl;

	ft_vec.swap(ft_vec_c);

	ft_dif = ft_vec.end() - ft_vec.begin();
	std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	ft_it = ft_vec.begin();
	ft_ite = ft_vec.end();
	std::cout << "ft_vec : [ ";
	for (; ft_it != ft_ite; ++ft_it) {
		std::cout << *ft_it << " "; }
	std::cout << "]" << std::endl << std::endl;
	ft_dif = ft_vec_c.end() - ft_vec_c.begin();
	std::cout << ft_dif << " " << ft_vec_c.size() << " " << ft_vec_c.capacity() << " " << ft_vec_c.max_size() << std::endl;
	ft_it = ft_vec_c.begin();
	ft_ite = ft_vec_c.end();
	std::cout << "ft_vec_c : [ ";
	for (; ft_it != ft_ite; ++ft_it) {
		std::cout << *ft_it << " "; }
	std::cout << "]" << std::endl << std::endl;

	swap(ft_vec, ft_vec_c);

	ft_dif = ft_vec.end() - ft_vec.begin();
	std::cout << ft_dif << " " << ft_vec.size() << " " << ft_vec.capacity() << " " << ft_vec.max_size() << std::endl;
	ft_it = ft_vec.begin();
	ft_ite = ft_vec.end();
	std::cout << "ft_vec : [ ";
	for (; ft_it != ft_ite; ++ft_it) {
		std::cout << *ft_it << " "; }
	std::cout << "]" << std::endl << std::endl;
	ft_dif = ft_vec_c.end() - ft_vec_c.begin();
	std::cout << ft_dif << " " << ft_vec_c.size() << " " << ft_vec_c.capacity() << " " << ft_vec_c.max_size() << std::endl;
	ft_it = ft_vec_c.begin();
	ft_ite = ft_vec_c.end();
	std::cout << "ft_vec_c : [ ";
	for (; ft_it != ft_ite; ++ft_it) {
		std::cout << *ft_it << " "; }
	std::cout << "]" << std::endl << std::endl;

	return (0); }