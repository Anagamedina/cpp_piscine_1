/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:11:33 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 14:56:26 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
  private:
	std::string _name;

  public:
	Zombie();
	~Zombie();

	void	announce(void);
	void	setName(std::string name);

};

Zombie *zombieHorde(int N, std::string name);

#endif
