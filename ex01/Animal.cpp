/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:35:31 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 19:42:38 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Default constructor [Animal]" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor [Animal]" << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Copy constructor [Animal]" << std::endl;
	this->type = src.type;
}

Animal & Animal::operator=(Animal const & src)
{
	this->type = src.type;

	return (*this);
}



void Animal::makeSound()
{
	std::cout << "It's don't know it's identity. It can't make sound." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "It doesn't know it's identity. It can't make sound." << std::endl;
}


std::string Animal::getType()
{
	return (this->type);
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::setIdeas()
{
	std::cout << "Oops! It doesn't have a brain" << std::endl;
}

void Animal::showIdeas()
{
	std::cout << "Oops! It doesn't have a brain" << std::endl;
}