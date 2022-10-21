/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:12:26 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 19:44:10 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(Brain const & src);
	~Brain();

	Brain & operator =(Brain const & src);

	void setIdeas();
	void showIdeas();
};

#endif