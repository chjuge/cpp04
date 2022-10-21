/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:10:51 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 19:46:23 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main (void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	
	int n = 10;
	Animal* arr[n];
	for (int i = 0; i < 5; i++)
		arr[i] = new Cat();
	for (int i = 5; i < n; i++)
		arr[i] = new Dog();
	
	std::cout << std::endl;

	arr[0]->setIdeas();
	arr[9]->setIdeas();

	for (int i = 0; i < n; i++)
		arr[i]->showIdeas();

	std::cout << std::endl;

	for (int i = 0; i < n; i++)
		delete arr[i];
	return (0);
}