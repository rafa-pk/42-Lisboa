/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:11:01 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/17 16:17:29 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void);
void	ft_writecom(int x, int y, int z);

void	ft_writecom(int x, int y, int z)
{
	if (x != 55 || y != 56 || z != 57)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 48;
	while (x <= 55)
	{
		y = x + 1;
		while (y <= 56)
		{
			z = y + 1;
			while (z <= 57)
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				ft_writecom(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
