/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:47:16 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 17:56:30 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
  private:
	std::string _type;

  public:
	Weapon(std::string type);
	~Weapon();

	const std::string getType(); // member function that returns a constant reference to type
	void setType(std::string type); //member function that set type using the new value a parameter
};

#endif
