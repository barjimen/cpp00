/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 22:00:50 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/11 23:14:20 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Es como el IFNDEF
#pragma once
# include <iostream>
# include "../inc/Contact.hpp"

class PhoneBook
{
    private:
        Contact _contact[8];
        int _nbContacts;
    public:
    //constructor: cuando escribes en un sitio se llama aqui
        PhoneBook();
    //destructor
        ~PhoneBook();
        void addContact();
        void FindContact();
};
