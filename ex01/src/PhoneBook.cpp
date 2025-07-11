/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 22:00:52 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/11 23:42:17 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */): _nbContacts(0){} //Asi se inicializa a 0
PhoneBook::~PhoneBook(){}

void PhoneBook::addContact()
{
    std::string aux;
    //El nb de contactos 
    std::cout << "Adding new contact..." << std::endl;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            std::cout << "Name:" << std::endl;
            while (true)
            {
                std::getline(std::cin, aux);
                if (std::cin.eof() || aux.length() <= 0 || aux.find_first_of("\t") != std::string::npos)
                    std::cout << "Not valid u stupid >:(" << std::endl;
                else
                {
                    _contact[_nbContacts % 8].setData(i, aux);                 
                    break;
                }
            }
        }
        if (i == 1)
        {
            std::cout << "Last Name:" << std::endl;
            while (true)
            {
                std::getline(std::cin, aux);
                if (std::cin.eof() || aux.length() <= 0 || aux.find_first_of("\t") != std::string::npos)
                    std::cout << "Not valid u stupid >:(" << std::endl;
                else
                {
                    _contact[_nbContacts % 8].setData(i, aux);                 
                    break;
                }
            }
        }
        if (i == 2)
        {
            std::cout << "Nickname:" << std::endl;
            while (true)
            {
                std::getline(std::cin, aux);
                if (std::cin.eof() || aux.length() <= 0 || aux.find_first_of("\t") != std::string::npos)
                    std::cout << "Not valid u stupid >:(" << std::endl;
                else
                {
                    _contact[_nbContacts % 8].setData(i, aux);                 
                    break;
                }
            }
        }
        if (i == 3)
        {
            std::cout << "Phone number:" << std::endl;
            while (true)
            {
                std::getline(std::cin, aux);
                if (std::cin.eof() || aux.length() != 9 || aux.find_first_not_of("0123456789") != std::string::npos)
                    std::cout << "Not valid u stupid >:(" << std::endl;
                else
                {
                    _contact[_nbContacts % 8].setData(i, aux);                 
                    break;
                }
            }
        }
        if (i == 4)
        {
            std::cout << "Dark secret:" << std::endl;
            while (true)
            {
                std::getline(std::cin, aux);
                if (std::cin.eof() || aux.length() <= 0 || aux.find_first_of("\t") != std::string::npos)
                    std::cout << "Not valid u stupid >:(" << std::endl;
                else
                {
                    _contact[_nbContacts % 8].setData(i, aux);                 
                    break;
                }
            }
        }
    }
    _nbContacts++;
}
void PhoneBook::FindContact()
{
}