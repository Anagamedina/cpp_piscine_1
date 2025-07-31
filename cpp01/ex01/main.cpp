/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:10:54 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 15:04:27 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	int N = 3;
	Zombie *myHordeZombie = zombieHorde(N, "hordeZombieMember");
	if (!myHordeZombie)
	{
		std::cout << "Memory failure" << std::endl;
		return (1);
	}
	for (int i = 0; i < N; i++)
	{
		myHordeZombie[i].announce();
	}
	delete[] myHordeZombie;
	return (0);
}
