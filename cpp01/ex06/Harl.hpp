/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:05:25 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/04 17:18:32 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
  private:
    //funciiones  estaticas 
    void  _debug( void );
    void  _info( void );
    void  _warning( void );
    void  _error( void );


  public:

    Harl();
    ~Harl();
    void  complain(std::string level );

};
#endif