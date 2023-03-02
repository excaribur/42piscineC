/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:29:18 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/12 23:23:19 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	lowercase(char *str)
{
	if (*str >= 65 && *str <= 90)
	{
		*str = *str + 32;
	}
}

void	putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	printbegin(int i)
{
	if (i <= 16)
	{
		putstr("0");
	}
	else if (i >= 17 && i <= 31)
	{
		putstr("1");
	}
	else
	{
		putstr("0x");
	}
}

void	printhex(int i)
{
	char	c;
	int		num;

	num = i;
	if (i <= 0)
	{
		return ;
	}
	i = i % 16;
	if (i < 10)
	{
		c = '0' + i;
	}
	if (i > 9)
	{
		c = 'a' + i -10;
	}
	i = i / 16;
	printhex(i);
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	while (*str)
	{
		if (*str >= 32 && *str <= 127)
		{
			write(1, str, 1);
		}
		else
		{
			i = *str - '\0';
			putstr("\\");
			if (i <= 0)
			{
				putstr("0");
			}
			else
			{
				printbegin(i);
				printhex(i);
			}
		}
		str++;
	}
}
