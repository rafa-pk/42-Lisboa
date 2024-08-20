/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:38:05 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/20 16:35:54 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char  *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char str1[] = "Ola, mundo!";
	char str2[] = "Adeus, mundo!";
	char str3[40];

	ft_strcpy(str2, str1);
	ft_strcpy(str3, "Adeus, mundo!");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	return (0);
}
