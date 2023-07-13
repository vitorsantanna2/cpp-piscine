/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:35:47 by jsantann          #+#    #+#             */
/*   Updated: 2023/05/09 18:35:37 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[++i])
	{
		j = 0;
		while (argv[i][j])
			std::cout << (char) toupper(argv[i][j++]);
		if (argv[i + 1])
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
