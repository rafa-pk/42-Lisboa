/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:02:31 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/17 11:06:17 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	t;
	char	c;

	t = 'N';
	c = 'P';
	if (n < 0)
	{
		write(1, &t, 1);
	}
	else
	{
		write(1, &c, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(int n);
	return (0);
}*/
