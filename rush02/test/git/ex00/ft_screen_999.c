/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_screen_999.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:06:40 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/24 17:56:42 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft_header_screen.h"

void	ft_1to9(unsigned int value)
{
	int	i;

	i = 0;
	while (g_dict[i].word)
	{
		if (value == g_dict[i].number)
		{
			ft_putstr(g_dict[i].word);
			return ;
		}
		i++;
	}
}

void	ft_10to19(unsigned int value, int space)
{
	int	i;

	i = 0;
	while (g_dict[i].word)
	{
		if (value == g_dict[i].number)
		{
			ft_putstr(g_dict[i].word);
			if (space != 1)
				ft_putstr(" ");
			return ;
		}
		i++;
	}
}

void	ft_20to90(unsigned int value, int units)
{
	int	i;

	value = value * 10;
	i = 0;
	while (g_dict[i].word)
	{
		if (value == g_dict[i].number)
		{
			ft_putstr(g_dict[i].word);
			if (units != 0)
				ft_putstr(" ");
			return ;
		}
		i++;
	}
}

void	ft_10to99(unsigned int value, int space)
{
	unsigned int	units;
	unsigned int	tens;

	if (value >= 10 && value <= 19)
	{
		ft_10to19(value, space);
	}
	else if (value >= 20 && value <= 99)
	{
		tens = value / 10;
		units = value % 10;
		ft_20to90(tens, units);
		if (units != 0)
			ft_1to9(units);
	}
}

void	ft_100to999(unsigned int value, int space)
{
	unsigned int	hunds;

	hunds = value / 100;
	value = value % 100;
	if (hunds != 0)
	{
		ft_1to9(hunds);
		ft_putstr(" ");
		ft_put_hunds();
	}
	if (value >= 1 && value <= 9)
	{
		ft_1to9(value);
	}
	else if (value >= 10 && value <= 99)
	{
		ft_10to99(value, space);
	}
}
