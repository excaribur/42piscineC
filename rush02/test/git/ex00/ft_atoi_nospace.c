/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:05:19 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/24 13:12:04 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_atoi(char *str)
{
	unsigned int	run;
	unsigned int	max;

	max = 4294967295;
	run = 0;
	while (*str)
	{
		if (run == max / 10)
		{
			if ((unsigned int)(*str - '0') > max % 10)
				return (max);
		}
		if ((*str < '0' || *str > '9') && run != 0)
			return (run);
		else if (*str >= '0' && *str <= '9')
			run = run * 10 + *str - '0';
		str++;
	}
	return (run);
}
