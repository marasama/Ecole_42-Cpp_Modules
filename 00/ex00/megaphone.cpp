/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 00:38:57 by adurusoy          #+#    #+#             */
/*   Updated: 2024/01/29 00:38:57 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, string argv)
{
    int i = 1;
    int j;
    
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
          i++;
    }
    cout << endl;
    return (0);
}
