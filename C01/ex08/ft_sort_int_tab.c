/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:07:25 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/18 17:50:42 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (tab[i] <= size)
	{
		i++;
	}
}

int	main(void)
{
	int	a;
	
	a = ft_sort_int_tab("12345678", 8);
	printf("%d", a);
	return(0);
}
