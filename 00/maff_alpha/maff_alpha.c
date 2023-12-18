/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:20:53 by luicasad          #+#    #+#             */
/*   Updated: 2023/12/18 17:43:05 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/* Loops over ascii codes corresponding to the UPPER alphabet [A-Z] with i.   */
/* A = 65..... Z= 90                                                          */
/* Even letters (i % 2) == 0 show upper, and odd show lower.                  */
/*                                                                            */
/* In ascii, lower and up letter ar 32 positions distant.                     */
/* i + 32 transform a capital letter i into the lower one                     */
/* ************************************************************************** */
#include <unistd.h>

int	main(void)
{
	int	i;
	int a;

	i=65;
	while (i <= 90)
	{
		if ((i % 2) == 0)
			write(1, &i, 1);
		else
		{
			a = i + 32;
			write(1, &a, 1);
		}
		i++;
	}
	write (1, &"\n", 1);
	return (0);
}
