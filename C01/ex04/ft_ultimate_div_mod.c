/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 12:03:08 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/20 15:13:31 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}
/*
int	main(void)
{	
	int	a;
	int 	b;
	int	*ap;
	int	*bp;

	a = 10;
	b = 2;
	ap = &a;
	bp = &b;
	ft_ultimate_div_mod(ap, bp);
	printf("a: %d b: %d", a, b);
	return 0;
}*/
