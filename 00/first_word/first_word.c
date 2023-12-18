/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luicasad <luicasad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:59:33 by luicasad          #+#    #+#             */
/*   Updated: 2023/12/18 19:19:56 by luicasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	is_space(char c)
{
	int r;

	r = 0;
	r = r || (c == ' ');
	r = r || (c == '\t');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	while (str)
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	char	*s;
	int		i;

	if (argc == 2)
	{
		i = 0;
		s = argv[1];
		while (s[i] != '\0' && is_space(s[i]))
			i++;
		while (s[i] != '\0' && !is_space(s[i]))
		{
			ft_putchar(s[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
