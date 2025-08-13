/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:38:38 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/13 14:19:17 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal { 
  protected:

	std::string _type;

  public:

	Animal();
	virtual ~Animal();
	Animal(const Animal& copy);
	Animal& operator=(const Animal& other);

	std::string		getType(void)const;
	virtual void	makeSound() const;

};

#endif

