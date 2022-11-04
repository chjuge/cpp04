/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:10:51 by mproveme          #+#    #+#             */
/*   Updated: 2022/11/04 19:02:45 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main (void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	int n = 5;
	Animal* arr[n];
	arr[0] = new Animal();
	arr[1] = new WrongAnimal();
	arr[2] = new Cat();
	arr[3] = new Dog();
	arr[4] = new WrongCat();
	for (int i = 0; i < n; i++)
		arr[i]->makeSound();
	for (int i = 0; i < n; i++)
		delete arr[i];
	return (0);
}
