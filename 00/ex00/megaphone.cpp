/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 00:38:57 by adurusoy          #+#    #+#             */
/*   Updated: 2024/02/15 03:43:41 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;
	int j;

	if(argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < 123 && argv[i][j] > 96)
				std::cout << (char)(argv[i][j] - 32);
			else
				std::cout << argv[i][j];
			j++;
		}
		std::cout << ' ';
		i++;
	}
	std::cout << std::endl;
	return (0);
}
