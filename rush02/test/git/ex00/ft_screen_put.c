/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_screen_put.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:37:15 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/24 14:06:16 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft_header_screen.h"

void	ft_put_hunds(void)
{
	int	i;

	i = 0;
	while (g_dict[i].word)
	{
		if (100 == g_dict[i].number)
		{
			ft_putstr(g_dict[i].word);
			ft_putstr(" ");
			return ;
		}
		i++;
	}
}

void	ft_put_1000(void)
{
	int	i;

	i = 0;
	while (g_dict[i].word)
	{
		if (1000 == g_dict[i].number)
		{
			ft_putstr(g_dict[i].word);
			ft_putstr(" ");
			return ;
		}
		i++;
	}
}

void	ft_put_mill(void)
{
	int	i;

	i = 0;
	while (g_dict[i].word)
	{
		if (1000000 == g_dict[i].number)
		{
			ft_putstr(g_dict[i].word);
			ft_putstr(" ");
			return ;
		}
		i++;
	}
}

void	ft_put_bill(void)
{
	int	i;

	i = 0;
	while (g_dict[i].word)
	{
		if (1000000000 == g_dict[i].number)
		{
			ft_putstr(g_dict[i].word);
			ft_putstr(" ");
			return ;
		}
		i++;
	}
}
