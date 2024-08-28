/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:12:25 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/28 13:32:34 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = dest_len;
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[i] && j < size - j - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char	dest[22] = "Por favor";
	char	src[] = "acerta madje";
	printf("%u\n", ft_strlcat(dest, src, 6));
	printf("%lu\n", strlcat(dest, src, 6));
	return (0);
}*/
