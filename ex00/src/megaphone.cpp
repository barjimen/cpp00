/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barjimen <barjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 21:22:05 by barjimen          #+#    #+#             */
/*   Updated: 2025/07/11 21:49:54 by barjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char** argv)
{
    if (argc == 1)
    {
        //Se usa la librería de std -> cout para escribir, seguida de << y tiene que acabar en salto de linea: std::endl
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i = 1; argv[i]; i++)
        {
            //Creas una string mediante el obj string (dentro de std esta definida)
            std::string str = argv[i];
            for (size_t x = 0; x < str.length(); x++)
            {
                str[x] = std::towupper(str[x]);
            }
            std::cout << str;
        }
        std::cout << std::endl;
    }
    return (0);
}