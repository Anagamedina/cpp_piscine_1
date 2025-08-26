/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:44:04 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 18:15:21 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>


#define DEFAULT "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

class AAnimal {
  protected:

	std::string _type;

  public:

	AAnimal();
	virtual ~AAnimal();
	AAnimal(const AAnimal& copy);
	AAnimal& operator=(const AAnimal& other);

	std::string		getType(void)const;
	virtual void	makeSound() const = 0;

};

#endif
