/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:11:20 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/31 14:45:47 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


//debe reservar memoria para N objetos zombie en una unica asignacion de
//memoria (new)
//inicializar cada uno de los zombis, asignandoles el nombre pasado como
//parametro 
//la funcion debe devolver un puntero al primer zombie de la horda 

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombiPtr = new Zombi[N];

	for (int i = 0; i < N; i++)
	{
		z[i].setName(name);
	}
	//es dinamico puedo devolverlo para usarlo despues 
	return (z);
	
}
