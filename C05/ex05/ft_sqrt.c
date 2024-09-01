/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:58:19 by raica-ba          #+#    #+#             */
/*   Updated: 2024/09/01 16:04:34 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0 || nb == 2)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i < nb)
	{
		i++;
	}
	if (nb % i != 0)
		return (0);
	return (i);
}
/*
int	main(void)
{
	int	nb;

	nb = 144;
	printf("%d", ft_sqrt(nb));
	return (0);
}*/
