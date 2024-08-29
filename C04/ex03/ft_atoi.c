/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:24:25 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/29 13:25:30 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	par_ou_impar;

	i = 0;
	nb = 0;
	par_ou_impar = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			par_ou_impar++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	if (!(par_ou_impar % 2))
		return (nb);
	return (-nb);
}
/*
int	main(void)
{
	char	str[] = "      ---+--+1234ab567";
	printf("%d", ft_atoi(str));
	return (0);
}*/
