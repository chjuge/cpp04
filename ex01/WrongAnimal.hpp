/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:45:57 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 15:28:38 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "Animal.hpp"

class WrongAnimal : public Animal
{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const & src);
	~WrongAnimal();

	WrongAnimal & operator =(WrongAnimal const & src);

	void makeSound();
	void makeSound() const;
};

#endif