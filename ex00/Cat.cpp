/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:57:24 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 15:30:16 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Default constructor [Cat]" << std::endl;
}

Cat::~Cat()
{
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