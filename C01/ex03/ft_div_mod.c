/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:47:33 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/20 15:02:53 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*divp;
	int	*modp;

	a = 28;
	b = 3;
	div = a / b;
	mod = a % b;
	divp = &div;
	modp = &mod;
	ft_div_mod(a, b, divp, modp);
	printf("Div: %d Mod: %d\n", *divp, *modp);
	return(0);
}*/
