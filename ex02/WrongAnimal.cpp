/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:47:57 by mproveme          #+#    #+#             */
/*   Updated: 2022/11/04 19:17:06 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : Animal()
{
	std::cout << "Default constructor [WrongAnimal]" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor [WrongAnimal]" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) : Animal(src)
{
	std::cout << "Copy constructor [WrongAnimal]" << std::endl;
	this->type = src.type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
	this->type = src.type;

	return (*this);
}

void WrongAnimal::makeSound()
{
	std::cout << "Xiao!" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Xiao!" << std::endl;
}
