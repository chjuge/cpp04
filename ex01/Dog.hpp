/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:54:21 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 18:58:43 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain * brain;
public:
	Dog();
	Dog(Dog const & src);
	~Dog();

	Dog & operator =(Dog const & src);

	void makeSound();
	void makeSound() const;
};

#endif