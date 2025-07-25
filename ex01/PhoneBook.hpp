/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:05:21 by anamedin          #+#    #+#             */
/*   Updated: 2025/07/25 14:05:24 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


class PhoneBook { 
  public:
    PhoneBook( size_t _max_size ) //size
    ~PhoneBook( void );

    std::string add( void ); //comandos
    std::string search( void );

  private:
    Contact contacts[8];
    size_t max_size;
    size_t _index;

    //std::string get....
    //std::string get....
    void exit( void );
};

#endif
