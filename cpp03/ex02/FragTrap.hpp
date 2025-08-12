/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:36:47 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/12 14:56:42 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class FragTrap : public ClapTrap{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& copy);

		FragTrap& operator=(const FragTrap& other);
		void highFiveGuys(void);

};
#endif
