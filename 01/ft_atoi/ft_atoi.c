/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 08:34:53 by luicasad          #+#    #+#             */
/*   Updated: 2023/12/16 16:21:08 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/* ft_atoi() loops str while does not ends and not find good character.       */
/*          *s != '\0' && !good_character                                     */
/* A good caracter is one of  +-0123456789                                    */
/*                                                                            */
/* Once skipped all bad chars, checks if first good char is a sign .          */
/* If there is a sign it must s++ to skip it after analysis (*s++ == '-').    */
/*                                                                            */
/* sign becomes -1 or 1 with this formula 1 + (-2) * (char == '-').           */
/*                                                   \-----V-----/            */
/*                                        1 + 0 =  1    False = 0  ==> 1 + 0  */
/*                                        1 - 2 = -1    True  = 1  === 1 - 2  */
/*  Once in the digits                                                        */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *s)
{
	int	sign;
	int	r;

	r = 0;
	sign = 1;
	while (*s != '\0' && !(*s == '+' || *s == '-' || ('0' <= *s && *s <= '9')))
		s++;
	if (s)
	{
		if ((*s == '+') || (*s == '-'))
			sign = sign + (-2) * (*s++ == '-');
		while (('0' <= *s) && (*s <= '9'))
			r = r * 10 + (*s++ - '0');
	}
	return (sign * r);
}
