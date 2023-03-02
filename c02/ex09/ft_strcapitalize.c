/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:54:36 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 14:30:20 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowercase(char *str)
{
	if (*str >= 65 && *str <= 90)
	{
		*str = *str + 32;
	}
}

void	uppercase(char *str)
{
	if (*str >= 97 && *str <= 122)
	{
		*str = *str - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || str[i - 1] == 32 || str[i - 1] == 43 || str[i - 1] == 45)
		{
			uppercase(&str[i]);
		}
		else
		{
			lowercase(&str[i]);
		}
		i++;
	}
	return (str);
}
