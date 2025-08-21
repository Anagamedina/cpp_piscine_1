/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:10:54 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:19:34 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	int N = 3;
	Zombie *myHordeZombie = zombieHorde(N, "hordeZombieMember");
	if (!myHordeZombie)
		return (1);
		
	for (int i = 0; i < N; i++)
	{
		myHordeZombie[i].announce();
	}
	delete[] myHordeZombie;
	return (0);
}
