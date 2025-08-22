/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:04:01 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/22 13:45:00 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    std::cout << "===== Harl Complaint Demo =====\n" << std::endl;

    Harl objHarl;

    objHarl.complain("DEBUG");

    objHarl.complain("INFO");

    objHarl.complain("WARNING");

    objHarl.complain("ERROR");

    objHarl.complain("RANDOM");

    std::cout << "\n===== Demo Completed =====" << std::endl;

    return 0;
}
