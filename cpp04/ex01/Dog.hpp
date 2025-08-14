/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:25:43 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/14 11:06:05 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
  private:
    Brain   *_brain;
  public: 
    Dog();
    ~Dog();
    Dog(const Dog& copy);
    Dog& operator=(const Dog& other);

    void makeSound() const;

};

#endif
