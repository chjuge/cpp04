/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:14:41 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 19:45:00 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor [Brain]" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "This is " + std::to_string(i + 1) + " idea";
}

Brain::Brain(Brain const & src)
{
	std::cout << "Copy constructor [Brain]" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Destructor [Brain]" << std::endl;
}

Brain & Brain::operator =(Brain const & src)
{
	std::cout << "Copy constructor [Brain]" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	
	return (*this);
}

void Brain::setIdeas()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Braaaaaains!";
}

void Brain::showIdeas()
{
	std::cout << this->ideas[0] << std::endl;
}