/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 09:12:14 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/29 12:59:08 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain { 
  private:
    std::string _ideas[100];

  public:
    Brain();
    ~Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);

   void setIdea(int index, const std::string& idea);
   std::string getIdea(int index) const;
};

#endif
