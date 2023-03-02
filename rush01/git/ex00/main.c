/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_r01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:44:29 by natharav          #+#    #+#             */
/*   Updated: 2022/10/16 19:10:48 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include"put_result.c"

void	put_result(int m, int n, int arr[m][n]);

int	len(char *argv)
{
	int	i;

	i = 7;
	while (argv[i])
	{
		i++;
	}
	if (i == 31)
		return (0);
	return (1);
}

int	validate_args(char *argv, int n, int m, int arr[n][m])
{
	int	i;
	int	j;

	i = 0;
	while (i <= n - 1)
	{
		j = 0;
		while (j <= m - 1)
		{
			if (*argv >= '1' && *argv <= '4')
			{
				arr[i][j] = *argv - '0';
				argv = argv + 2;
			}
			else
			{
				write (1, "Argument fault", 14);
				return (0);
			}
			j ++;
		}
		i ++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	arr[4][4];

	if (argc != 2)
	{
		write(1, "One argument expected:./a.out <str>\n", 37);
		return (1);
	}
	if (len(argv[1]))
	{
		write(1, "One argument expected:./a.out <str>\n", 37);
		return (1);
	}
	validate_args(argv[1], 4, 4, arr);
	put_result(4, 4, arr);
	return (0);
}
