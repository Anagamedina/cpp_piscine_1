/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:13:59 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/19 12:07:50 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>


int	main( int argc, char **argv )
{
	std::string	empty_args = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	int			j;

	if ( argc == 1 )
		std::cout << empty_args;
	else
	{
		for ( int i = 1; i < argc; i++ )
		{
			j = 0;
			while ( argv[i][j] )
				std::cout << ( char )std::toupper( argv[i][j++] );
		}
	}
	std::cout << std::endl;
	return 0;
}
