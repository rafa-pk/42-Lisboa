/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:55:16 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/20 14:43:34 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int*a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*ap;
	int	*bp;

	a = 2;
	b = 68;
	ap = &a;
	bp = &b;
	ft_swap(ap, bp);
	printf("%d, %d\n", a, *ap);
	return (0);
}*/
