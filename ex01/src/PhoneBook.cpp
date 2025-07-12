/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 22:00:52 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/12 15:00:49 by barjimen         ###   ########.fr       */
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

std::string formatText(std::string text)
{
    std::string aux = std::string(10, ' ');
    if (text.length() <= 10)
        aux = text;
    else
        aux = text.substr(0, 9) + ".";
    if (text.length() < 10)
        aux = std::string(10 - text.length(), ' ') + aux;
    return (aux);
}

void PhoneBook::FindContact()
{
    
    std::string aux;
    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|     INDEX|    F NAME|    L NAME|  NICKNAME|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << "|" << std::string(9, ' ') << i + 1 << "|" << formatText(_contact[i].getData(0)) << "|" << formatText(_contact[i].getData(1)) << "|" << formatText(_contact[i].getData(2)) << "|" << std::endl;
    }
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    std::cout << "Which contact do you want to see information about? Enter the index:" << std::endl;
    std::getline(std::cin, aux);
    if (std::cin.eof() || aux.length() != 1 || aux.find_first_not_of("12345678") != std::string::npos)
        std::cout << "Not valid u stupid >:(" << std::endl;
    else
    {
        for (int x = 0; x < 5; x++)
        {
            _contact[std::atoi(aux.c_str())].getData(x);
            
        }
    }
}

// {     INDEX|    F NAME|    L NAME|  NICKNAME}
// {----------|----------|----------|----------}
// {         0|   barbara|Hermenegil|       lol}