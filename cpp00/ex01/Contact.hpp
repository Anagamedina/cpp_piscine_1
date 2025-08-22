/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:46:28 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/22 10:26:41 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP


#include <iostream>
#include <string>

class Contact{

   private:
    std::string first_name;
    std::string phone_number;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    
  public:
  
    Contact();
    ~Contact();

    void set_name( std::string _name);
    void set_phone( std::string _phone );
    void set_last_name( std::string _last_name);
    void set_nickname( std::string _nickname );
    void set_secret( std::string  _secret);

 
    std::string get_name(void);
    std::string get_last_name(void);
    std::string get_nickname(void);
    std::string get_secret(void);
    std::string get_phone(void);

};

#endif

