/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:12:54 by anamedin          #+#    #+#             */
/*   Updated: 2025/09/03 16:33:24 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public:
	// Virtual destructor ensures proper cleanup
	// of derived classes.
	virtual ~IMateriaSource(){
		
	}

	virtual void learnMateria(AMateria* m) = 0;
	virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif