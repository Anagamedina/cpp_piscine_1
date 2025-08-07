/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:45:24 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/07 08:43:04 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

//declaras la clase y sus métodos
class Weapon
{
  private:
	std::string _type;

  public:
  
	Weapon(std::string type);
	~Weapon();

	const std::string &getType() const; //devuelve referencia constante y no modifica el objeto	
	void setType(std::string type); //member function that set type using the new value a parameter
};

#endif

