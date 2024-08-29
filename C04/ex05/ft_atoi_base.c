/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:26:49 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/29 18:01:08 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	char_in_set(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

int	pos_in_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if ((base[i] >= 0 && base[i] <= 32) || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	len;
	int	par_ou_impar;

	i = 0;
	nb = 0;
	len = ft_strlen(base);
	par_ou_impar = 0;
	if (base_is_valid(base))
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i++] == '-')
				par_ou_impar++;
		}
		while (char_in_set(str[i], base))
			nb = nb * len + pos_in_set(str[i++], base);
		if (!(par_ou_impar % 2))
			return (nb);
		return (-nb);
	}
	return (0);
}
/*
int	main(void)
{
	char	*str = "      \n\v\t \r +++--+-1001";

	printf("The number is : %d\n", ft_atoi_base(str, "01"));
}*/
