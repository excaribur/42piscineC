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

void	ft_error(void)
{
	write(1, "Error", 5);
	write(1, "\n", 1);
}

char	*ignore_space(char *str)
{
	while (*str != '-' && *str != '+')
	{
		if (*str >= '0' && *str <= '9')
			return (str);
		if (*str != ' ' && !(*str >= 9 && *str <= 13))
			return ("\0");
		str++;
	}
	return (str);
}

unsigned int	ft_atoi_unsigned(char *str)
{
	unsigned int	run;
	char			*s1;
	unsigned int	max;

	max = 4294967295;
	run = 0;
	s1 = ignore_space(str);
	if (*s1 == '\0')
	{
		ft_error();
	}
	while (*s1)
	{
		if (run == max / 10)
		{
			if ((unsigned int)(*s1 - '0') > max % 10)
				return (max);
		}
		if ((*s1 < '0' || *s1 > '9') && run != 0)
			return (run);
		else if (*s1 >= '0' && *s1 <= '9')
			run = run * 10 + *s1 - '0';
		s1++;
	}
	return (run);
}
