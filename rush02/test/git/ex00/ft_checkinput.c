/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:05:19 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/24 18:04:35 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char			*ignore_space(char *str);
int				ft_strlen(char *str);
unsigned int	ft_atoi(char *str);

void	ft_error_1(void)
{
	write(1, "Error\n", 6);
}

int	maximum(char *str)
{
	if (ft_strlen(str) == 10)
	{
		if (*str >= '1' && *str <= '3')
			return (0);
		else if (*str <= '4')
		{
			str++;
			if (ft_atoi(str) <= 294967295)
				return (0);
		}
	}
	else if (ft_strlen(str) < 10)
	{
		return (0);
	}
	ft_error_1();
	return (1);
}

int	check_num(char *str)
{	
	while (*str)
	{
		while (*str)
		{
			if (*str != ' ' && !(*str >= 9 && *str <= 13))
				break ;
			str++;
		}
		if (!(*str >= '0' && *str <= '9'))
		{
			ft_error_1();
			return (1);
		}
		str++;
	}
	return (0);
}

int	ft_checkinput(char *str)
{
	char	*clone;

	if (*str == '\0')
	{
		ft_error_1();
		return (1);
	}
	clone = str;
	if (check_num(str))
		return (1);
	clone = ignore_space(clone);
	if (maximum(clone))
		return (1);
	return (0);
}
