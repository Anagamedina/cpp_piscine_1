/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:25:43 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/13 14:25:45 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
  public: 
    Dog();
    ~Dog();
    Dog(const Dog& copy);
    Dog& operator=(const Dog& other);

    void makeSound() const;

};

#endif
