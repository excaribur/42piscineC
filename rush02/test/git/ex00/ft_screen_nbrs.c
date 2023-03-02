/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_screen_nbrs_v3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:04:17 by natharav          #+#    #+#             */
/*   Updated: 2022/10/24 17:57:22 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft_header_screen.h"

void	ft_1000to999999(unsigned int value, int space)
{
	if (value / 1000 != 0)
	{
		ft_100to999(value / 1000, space);
		ft_putstr(" ");
		ft_put_1000();
	}
	ft_100to999(value % 1000, space);
}

void	ft_1000000to999999999(unsigned int value, int space)
{
	if (value / 1000000 != 0)
	{
		ft_100to999(value / 1000000, space);
		ft_putstr(" ");
		ft_put_mill();
	}
	ft_1000to999999(value % 1000000, space);
}

void	ft_billion(unsigned int value, int space)
{
	if (value != 0)
	{
		ft_1000000to999999999(value / 1000000000, space);
		ft_putstr(" ");
		ft_put_bill();
	}
	ft_1000000to999999999(value % 1000000000, space);
}

int	first_check(unsigned int value, int n_line)
{
	int	i;

	i = 0;
	while (i <= n_line)
	{
		if (value == g_dict[i].number)
		{
			ft_putstr(g_dict[i].word);
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_screen_nbrs(unsigned int value, char *argv)
{
	int	n_line;

	n_line = ft_open(argv);
	if (first_check(value, n_line))
		return ;
	if (value >= 10 && value <= 99)
		ft_10to99(value, 0);
	else if (value >= 100 && value <= 999)
		ft_100to999(value, 0);
	else if (value >= 1000 && value <= 999999)
		ft_1000to999999(value, 1);
	else if (value >= 1000000 && value <= 999999999)
		ft_1000000to999999999(value, 1);
	else if (value >= 1000000000 && value <= 4294967295)
		ft_billion(value, 1);
	ft_free_dict(n_line);
}
