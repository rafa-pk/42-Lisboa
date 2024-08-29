/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:13:57 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/29 12:08:33 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (to_find[j] == str[i + j] && to_find[j] != 0)
			{
				j++;
			}
			if (to_find[j] == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main (void)
{
	char	str[] = "boi foiguhjvyuv";
	char	to_find[] = "foi";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
