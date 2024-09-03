/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:12:59 by raica-ba          #+#    #+#             */
/*   Updated: 2024/09/03 15:33:17 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	if (size == 0)
	{
		res = malloc(sizeof(char));
		res[0] = 0;
		return (res);
	}
	while (i < size)
	{
		strs[i] = 0;
		i++;
	}
	j = (*sep) * (size - 1);
	res = malloc(sizeof(char) * j);
	i = 0;
	while (i < size)
	{
		ft_strcat(strs[i], sep);
		i++;		
	}
	return (0);
}

int	main (int argv, char *argc[])
{
	char	sep[] = "-";
	return (0);	
}
