/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:13:53 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/12 14:45:52 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Contact.hpp"
# include "../inc/PhoneBook.hpp"

int main ()
{
    PhoneBook librito;
    std::string aux;
    while (true)
    {
        std::cout << "Welcome to your phonebook, what do you wanna do? ADD(A), SEARCH(S), EXIT(E)" << std::endl;
        std::getline(std::cin, aux);
        if (aux == "A" || aux == "a")
            librito.addContact();
        if (aux == "S" || aux == "s")
            librito.FindContact();
        if (aux == "E" || aux == "e")
        {
            std::cout << "Closing phonebook. Bye!" << std::endl;
            break;
        }
    }   
}