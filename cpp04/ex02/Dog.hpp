/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:46:38 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 17:46:56 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
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
