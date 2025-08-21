/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:05:25 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:56:12 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
  private:
    void  _debug( void );
    void  _info( void );
    void  _warning( void );
    void  _error( void );


  public:

    Harl();
    ~Harl();
    // Public method to complain based on level string
    void  complain(std::string level );

};
#endif