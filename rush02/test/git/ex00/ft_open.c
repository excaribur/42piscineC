/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:16:39 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/25 13:03:14 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char			*ft_strdup(char *src);
int				ft_strnlen(char *str, char c);
unsigned int	ft_atoi_unsigned(char *str);
int				ft_strlen(char *str);
void			ft_putstr(char *str);
unsigned int	ft_atoi(char *str);

void	ft_load_dict(char *str, int n)
{
	int		i;
	char	*number;
	char	*word;

	number = (char *)malloc(sizeof(char) * (ft_strnlen(str, ':') + 1));
	word = (char *)malloc(sizeof(char) * (ft_strnlen(str, '\n') + 1));
	if (number == NULL || word == NULL)
		return ;
	i = 0;
	while (*str != ':' && *str != 0)
		number[i++] = *str++;
	number[i] = '\0';
	g_dict[n].number = ft_atoi(number);
	i = 0;
	while ((*str == ' ' || *str == ':') && *str != 0)
		str++;
	while (*str != 0)
		word[i++] = *str++;
	word[i] = '\0';
	g_dict[n].word = ft_strdup(word);
	free(number);
	free(word);
}
#include <stdio.h>
void	ft_load_str(char *argv, char buff, int n_line, int line[n_line])
{
	int		n;
	int		i;
	char	*str;
	int		fd;

	for (int i = 0; i < LENGTH; i++)
		printf("%d\n",line[i]);
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return ;
	n = 0;
	i = 0;
	str = (char *)malloc(sizeof(char) * (line[n] + 1));
	while (read(fd, &buff, 1))
	{
		if (i == 0)
			str = (char *)malloc(sizeof(char) * (line[n] + 1));
		if (str == NULL)
			return ;
		str[i] = buff;
		if (i == line[n] - 1)
		{
			str[i] = '\0';
			ft_load_dict(str, n);
			free(str);
			i = -1;
			n++;
		}
		i++;
	}
}

int	ft_load(int fd, char buff, char *argv)
{
	int	line[LENGTH];
	int	n_line;
	int	size;

	for (int i = 0; i< LENGTH; i++)
		line[i] = 0;
	n_line = 0;
	while (read(fd, &buff, 1))
	{
		size++;
		if (buff == '\n')
		{
			line[n_line] = size;
			n_line++;
			size = 0;
		}
	}
	ft_load_str(argv, buff, n_line, line);
	return (n_line);
}

int	ft_open(char *argv)
{
	int		fd;
	char	buff;
	int		lenght;

	buff = '\0';
	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	lenght = ft_load(fd, buff, argv);
	if (close(fd) == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	return (lenght);
}
