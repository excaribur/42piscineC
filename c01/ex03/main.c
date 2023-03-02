/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:21:28 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/08 11:24:47 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"unistd.h"

void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_putnbr(int a);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 57;
	b = 10;
	ft_putnbr(a);
	write(1, ":", 1);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_div_mod(a, b, &div, &mod);
	ft_putnbr(div);
	write(1, ":", 1);
	ft_putnbr(mod);
}
