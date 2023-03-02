/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:57:22 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/25 20:29:36 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("./a.out: <string> \n");
		return (1);
	}

	char *s;
	char *r;
	int	n;

	n = strlen(argv[1]);
	s = strdup(argv[1]);
	r = ft_strdup(argv[1]);
	for (int i = 0; i < n + 1; i++)
		printf("strdup:%c vs  myFT:%c\n", s[i], r[i]);
	free(r);
	return (0);
}
*/
