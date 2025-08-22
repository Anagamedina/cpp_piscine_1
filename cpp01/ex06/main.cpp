/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:04:01 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/22 13:54:06 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static int getPosition(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
			return (i);
	}
	return (-1);
}


int main(int argc, char** argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
		return (1);
	}

	int index = getPosition(argv[1]);

	switch (index)
	{
	case 0:
		harl.complain("DEBUG");
		// fall through
	case 1:
		harl.complain("INFO");
		// fall through
	case 2:
		harl.complain("WARNING");
		// fall through
	case 3:
		harl.complain("ERROR");
		break;
	default:
		std::cerr <<
			"[ Probably complaining about insignificant problems ]"
			<< std::endl;
	}
	return 0;
}
