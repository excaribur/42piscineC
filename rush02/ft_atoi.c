/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:05:19 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/22 20:24:45 by natharav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	check FT can start isspace() if found alpha return NULL
	and return pointer start wiht  + or -;
	check sign of number
	check only digit
	if found Non-number after,then return a result
*/

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

	run = 0;
	s1 = ignore_space(str);
	if (*s1 == '\0')
	{
		ft_error();
		return (0);
	}
	while (*s1)
	{
		if ((*s1 < '0' || *s1 > '9') && run != 0)
		{
			return (run);
		}
		else if (*s1 >= '0' && *s1 <= '9')
		{
			run = run * 10 + *s1 - '0';
		}
		else
		{
			ft_error();
			return (0);
		}
		s1++;
	}
	return (run);
}
