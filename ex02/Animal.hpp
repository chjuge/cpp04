/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:32:45 by mproveme          #+#    #+#             */
/*   Updated: 2022/11/04 19:15:16 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(Animal const & src);
	virtual ~Animal();

	Animal & operator =(Animal const & src);

	virtual void makeSound();
	virtual void makeSound() const;
	std::string getType();
	std::string getType() const;

	virtual void setIdeas() = 0;
	virtual void showIdeas() = 0;
};

#endif
