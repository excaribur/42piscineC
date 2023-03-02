/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:21:28 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/12 16:30:44 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"unistd.h"

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int a);

int	main(void)
{
	char	*a;

	a = "HelLo 0 -t 9 $% @ ? <> girl 42";
	ft_putstr(a);
	write(1, "\n", 1);
	ft_putnbr(ft_strlen(a));
}
