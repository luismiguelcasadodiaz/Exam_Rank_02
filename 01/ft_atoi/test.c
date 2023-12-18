#include <stdio.h>
#include "ft_atoi.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	*name = "LUIS";

	printf("*name++ %c\n", *name++);
	printf("*(name) %c\n", *(name));
	printf("*name + 1 %c\n", *name + 1);
	printf("*(name + 1) %c\n", *(name + 1));

	if (argc != 2)
		printf("Usage ft_atoi <str>\n");
	else
	{
		printf("ft_atoi ==>The integer value of >%s< is >%d<\n", argv[1], ft_atoi(argv[1]));
		printf("   atoi ==>The integer value of >%s< is >%d<\n", argv[1], atoi(argv[1]));
	}
	return (0);
}
/* ************************************************************************** */
/* *name++ L                                                                  */
/* *(name) U                                                                  */
/* *name + 1 V                                                                */
/* *(name +1) I                                                               */
/* ************************************************************************** */

