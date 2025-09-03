/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:01:27 by anamedin          #+#    #+#             */
/*   Updated: 2025/09/03 18:29:20 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"


#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
class Ice : public AMateria
{
public:
	Ice();
	Ice(std::string const& type);
	Ice(Ice const& other);
	Ice& operator=(const Ice& other);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif