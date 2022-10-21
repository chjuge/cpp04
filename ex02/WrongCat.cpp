/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:47:57 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 15:40:48 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Default constructor [WrongCat]" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor [WrongCat]" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "Copy constructor [WrongCat]" << std::endl;
	this->type = src.type;
}

WrongCat & WrongCat::operator=(WrongCat const & src)
{
	this->type = src.type;

	return (*this);
}
