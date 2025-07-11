/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 22:09:27 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/11 22:35:46 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact(/* args */){}
Contact::~Contact(){}

void Contact::setData(int pos, std::string str)
{
    this->_data[pos] = str;
}
std::string Contact::getData(int pos)
{
    return (this->_data[pos]);
}