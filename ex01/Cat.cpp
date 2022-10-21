/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:57:24 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 19:10:14 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default constructor [Cat]" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Destructor [Cat]" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Copy constructor [Cat]" << std::endl;
	this->type = src.type;
}

Cat & Cat::operator=(Cat const & src)
{
	this->type = src.type;

	return (*this);
}

void Cat::makeSound()
{
	std::cout << "Meow!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}