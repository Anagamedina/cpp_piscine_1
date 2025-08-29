/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:45:38 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 22:24:06 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;	//forward declaration

class AMateria
{
protected:
	std::string type_;

public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria& other);
	AMateria& operator=(const AMateria& other);
	virtual ~AMateria();

	virtual AMateria* clone() const = 0;	//pure functions (abstract class)
	virtual void use(ICharacter& target);	// default or override optional

	std::string const& getType() const; //Returns the materia type
};
#endif