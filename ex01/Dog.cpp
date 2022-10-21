/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:57:24 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 18:59:11 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default constructor [Dog]" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Destructor [Dog]" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Copy constructor [Dog]" << std::endl;
	this->type = src.type;
}

Dog & Dog::operator=(Dog const & src)
{
	this->type = src.type;

	return (*this);
}

void Dog::makeSound()
{
	std::cout << "Wouf!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wouf!" << std::endl;
}