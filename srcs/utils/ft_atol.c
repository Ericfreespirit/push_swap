/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriling <eriling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 16:42:56 by eriling           #+#    #+#             */
/*   Updated: 2021/05/13 16:43:12 by eriling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atol(char *str)
{
	long	sign;
	long	nb;

	sign = 1;
	nb = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		(str)++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		(str)++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - '0');
		if (nb < 0 && sign == -1)
			return (0);
		str++;
	}
	return (nb * sign);
}
