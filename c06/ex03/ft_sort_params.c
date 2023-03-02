/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:08:12 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/17 21:13:26 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	cmp;

	i = 0;
	while (s1[i] || s2[i])
	{
		cmp = s1[i] - s2[i];
		if (cmp > 0)
			return (cmp);
		if (cmp < 0)
			return (cmp);
		i++;
	}
	return (0);
}

void	swap(int i, int j, char **argv)
{
	char	*temp;

	temp = argv[i];
	argv[i] = argv[j];
	argv[j] = temp;
}

char	**sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	**s;

	s = argv;
	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				swap(i, j, argv);
			j++;
		}
		i++;
	}
	return (s);
}

int	main(int argc, char **argv)
{
	int	i;

	sort(argc, argv);
	i = 1;
	while (argv[i])
	{
		putstr(argv[i]);
		putstr("\n");
		i++;
	}
	return (0);
}
