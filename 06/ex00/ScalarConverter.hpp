/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 05:34:41 by adurusoy          #+#    #+#             */
/*   Updated: 2024/08/30 05:36:50 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <cctype>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>

class ScalarConverter
{
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);

        static void convert(std::string str);

        static void convertChar(char i);
        static void convertInt(int i);
        static void convertFloat(float i);
        static void convertDouble(double i);

        static void printFunc(char a, int b, float c, double d);
        static void pseudoPrinter(std::string str);
        static void impossiblePrinter();
};
