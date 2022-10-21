/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:54:21 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 19:42:53 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain * brain;
public:
	Cat();
	Cat(Cat const & src);
	~Cat();

	Cat & operator =(Cat const & src);

	void makeSound();
	void makeSound() const;
	void setIdeas();
	void showIdeas();
};

#endif