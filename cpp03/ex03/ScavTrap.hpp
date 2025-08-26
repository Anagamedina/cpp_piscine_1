/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:09:15 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/26 10:14:50 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// =======================
// Class Definition
// =======================
class ScavTrap : virtual public ClapTrap { 
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& copy);
		ScavTrap& operator=(const ScavTrap& other);

	// =======================
	// Action Methods
	// ======================= 
		void attack(const std::string& target);
		void guardGate();

};

#endif
