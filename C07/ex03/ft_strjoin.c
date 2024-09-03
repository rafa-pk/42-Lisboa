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



char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char *res;

	if (size == 0)
	{
		res = malloc(sizeof(char));
		res[0] = 0;
		return (res);
	}
	
}
