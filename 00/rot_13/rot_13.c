/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:52:10 by luicasad          #+#    #+#             */
/*   Updated: 2023/12/18 20:07:07 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	rot_13(char c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return ((66 + (65 - c + 13)) % 26);
	else
		return (c);
}

int	main(int argc, char **argv)
{
	int i;
	int a;

	i = 0;
	a = 0;
	if (argc == 2)
		while (argv[1][i] != '\0')
		{
			a = rot_13(argv[1][i++]);
			write(1, &a , 1);
		}
	write(1, &"\n", 1);
	return (0);
}
