/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:05:25 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/28 17:26:37 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	bnb;

	bnb = nb;
	if (bnb < 0)
	{
		ft_putchar('-');
		bnb = -bnb;
	}
	if (bnb >= 10)
	{
		ft_putnbr(bnb / 10);
		ft_putnbr(bnb % 10);
	}
	else
		ft_putchar(bnb + '0');
}
/*
int	main(void)
{
	int nb;
	
	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}*/
