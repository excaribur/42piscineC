/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:56:52 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/13 19:07:08 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

//#include"ft_putchar.c"
//#include"ft_print_alphabet.c"
//#include"ft_print_reverse_alphabet.c"
//#include"ft_print_numbers.c"
//#include"ft_is_negative.c"
//#include"ft_print_comb.c"
//#include"ft_print_comb2.c"
//#include"ft_putnbr.c"
//#include"ft_print_combn.c"

void	ft_putnbr(int a);

int main()
{
	int	a;

	a =89;
//	ft_putchar('A');
//	ft_print_alphabet();
//	ft_print_reverse_alphabet();
//	ft_print_numbers();
//	ft_is_negative(393);
//	ft_print_comb();
//	ft_print_comb2();
	ft_putnbr(a);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-877);
//	ft_print_combn(34);	// 0 < n < 10
	return (0);
}

