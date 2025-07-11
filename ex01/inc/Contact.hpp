/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 22:09:33 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/11 22:36:20 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Contact
{
    private:
        std::string _data[5];
    public:
        Contact();
        ~Contact();
        //Dos métodos, el set para guardar y el get para recuperar esos datos
        void setData(int pos, std::string str);
        std::string getData(int pos);
};
