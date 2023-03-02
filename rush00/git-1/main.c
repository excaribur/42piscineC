/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrukhin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:10:52 by mtrukhin          #+#    #+#             */
/*   Updated: 2022/10/09 22:44:31 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	rush(int x, int y);

int	atoi(char *str)
{
	int	num;

	num = 0;
	while (*str)
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "Two arguments expected:./a.out <int> <int>\n", 47);
		return (1);
	}
	rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
