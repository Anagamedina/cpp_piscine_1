/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:04:01 by anamedin          #+#    #+#             */
/*   Updated: 2025/08/21 13:55:15 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    std::cout << "===== Harl Complaint Demo =====\n" << std::endl;

    Harl objHarl;

    std::cout << "[DEBUG] Calling complain with DEBUG level\n";
    objHarl.complain("DEBUG");

    std::cout << "\n[INFO] Calling complain with INFO level\n";
    objHarl.complain("INFO");

    std::cout << "\n[WARNING] Calling complain with WARNING level\n";
    objHarl.complain("WARNING");

    std::cout << "\n[ERROR] Calling complain with ERROR level\n";
    objHarl.complain("ERROR");

    std::cout << "\n[RANDOM] Calling complain with unknown level\n";
    objHarl.complain("RANDOM");

    std::cout << "\n===== Demo Completed =====" << std::endl;

    return 0;
}
