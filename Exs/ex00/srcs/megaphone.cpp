/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:52:32 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/13 14:57:22 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc != 1)
	{
		for (j = 1; j < argc; j++)
		{
			for (i = 0; i < (int)strlen(argv[j]); i++)
				putchar(toupper(argv[j][i]));
			if (argc - j != 1)
				putchar(' ');
		}
		putchar('\n');
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
