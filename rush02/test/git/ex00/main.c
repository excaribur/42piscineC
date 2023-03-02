/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:33:13 by natharav          #+#    #+#             */
/*   Updated: 2022/10/24 15:51:37 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	unsigned int	value;

	if (argc == 2)
	{
		if ((ft_checkinput(argv[1])))
			return (1);
		value = ft_atoi_unsigned(argv[1]);
		ft_screen_nbrs(value, "numbers.dict");
	}
	else if (argc == 3)
	{
		if ((ft_checkinput(argv[2])))
			return (1);
		value = ft_atoi_unsigned(argv[2]);
		ft_screen_nbrs(value, argv[1]);
	}
	else
	{
		ft_error();
		return (1);
	}
	return (0);
}
