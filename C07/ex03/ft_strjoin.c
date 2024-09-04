/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:12:59 by raica-ba          #+#    #+#             */
/*   Updated: 2024/09/04 15:26:09 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	char *res;

	i = 0;
	j = 0;
	if (size == 0)
	{
		res = malloc(sizeof(char));
		res[0] = 0;
		return (res);
	}
	while (i < size)
	{
		j += ft_strlen(strs[i]);
		i++;
	}
	j += ft_strlen(sep) * (size - 1);
	res = malloc(sizeof(char) * j);
	if (!res)
		return (NULL);
	i = 1;
	j = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)	
		{
			res = ft_strcat(res, sep);
		}
		i++;
	}
	return (res);
}
/*
int	main(int argc, char *argv[])
{
	char	*ptr;
	char	sep[] = ", ";
	ptr = ft_strjoin(argc, argv, sep);
	printf("%s", ptr);
	return (0);
}*/
