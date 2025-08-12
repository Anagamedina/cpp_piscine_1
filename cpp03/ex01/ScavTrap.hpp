/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:09:15 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/12 10:16:45 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap { 
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& copy);
		ScavTrap& operator=(const ScavTrap& other);

		//member functions 
		void attack(const std::string& target);
		void guardGate();

};

#endif
