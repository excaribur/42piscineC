/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:55:04 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 15:06:54 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<string.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_uppercase(char *str);
int	ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);
void	ft_putstr_non_printable(char *str);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage:<str> expected\n");
		return (0);
	}
	char *src = argv[1];
	char dest[5];									//ex00 ex01

	printf("sorce :%s\n", src);
	ft_strcpy(dest, src);							//ex00
	//strcpy(dest, src);
	//ft_strncpy(dest, src, 3);						//ex01
	//ft_strupcase(src);							//ex07
	//ft_strlowcase(src);							//ex08
	//ft_strcapitalize(src);						//ex09
	//int a = strlcpy(dest, src, 5);
	//int a = ft_strlcpy(dest, src, 5);						//ex10

	//char *s = "Coucou\ntu vas bien ?";					//ex11
	//printf("sorce·:%s\n", s);							//ex11
	//ft_putstr_non_printable(s);							//ex11

	printf("dest :%s", dest);				//ex00 ex01
//	printf("new sorce :%s", src);			//ex07 ex08 ex09

	//printf("count:%d", ft_str_is_alpha(src));			//ex02
	//printf("count:%d", ft_str_is_numeric(src));		//ex03
	//printf("count:%d", ft_str_is_lowercase(src));		//ex04
	//printf("count:%d", ft_str_is_uppercase(src));		//ex05
	//printf("count:%d", ft_str_is_printable(src));		//ex06
	//printf("\ncount:%d", a);								//ex10
	return (0);
}
