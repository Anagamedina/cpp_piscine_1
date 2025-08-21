/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:11:20 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:24:56 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// Creates a horde of N Zombies on the HEAP
Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombiPtr = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombiPtr[i].setName(name);
	}
	return (zombiPtr);
	
}