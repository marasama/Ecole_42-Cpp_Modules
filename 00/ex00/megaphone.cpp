/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 00:38:57 by adurusoy          #+#    #+#             */
/*   Updated: 2024/01/29 18:14:54 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int i = 1;
	int j;

	if(argc < 2)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return(0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < 123 && argv[i][j] > 96)
				cout << (char)(argv[i][j] - 32);
			else
				cout << argv[i][j];
			j++;
		}
		cout << ' ';
		i++;
	}
	cout << endl;
	return (0);
}
