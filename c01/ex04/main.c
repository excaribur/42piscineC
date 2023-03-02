/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:21:28 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/08 12:03:07 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"unistd.h"

void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putnbr(int a);

int	main(void)
{
	int	a;
	int	b;

	a = 46;
	b = 10;
	ft_putnbr(a);
	write(1, ":", 1);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	write(1, ":", 1);
	ft_putnbr(b);
	write(1, "\n", 1);
}
