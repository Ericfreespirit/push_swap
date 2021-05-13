/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <eriling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 14:45:11 by eriling           #+#    #+#             */
/*   Updated: 2021/05/13 16:49:06 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	check_input (int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 2;
	while (i < ac - 1)
	{
		if (ft_atol(av[i]) > 2147483647 || ft_atol(av[i]) < -2147483648)
			return (1);

		while (j < ac)
		{
			printf("i:%ld\n", ft_atol(av[i]));
			printf("j:%ld\n\n", ft_atol(av[j]));
			if (ft_atol(av[i]) == ft_atol(av[j]))
				return (1);
			j++;
		}
		i++;
		j = i++;
	}
	return(0);
}

void push_swap(int ac, char **av)
{
	(void)av;
	(void)ac;
	printf("in push_swap\n");
}	

int main (int ac, char **av)
{
	if (ac >= 2)
	{
		if (check_input(ac, av) == 1)
		{
			printf("Error\n");
			return (0);
		}
		push_swap(ac, av);
	}
	else 
		printf("Error\n");
	return (0);
}