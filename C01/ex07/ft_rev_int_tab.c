/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:13:23 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/19 17:35:35 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
void	ft_swap(int *a. int *b);

void    ft_swap(int*a, int *b)
{
        int     c;

        c = *a;
        *a = *b;
        *b = c;
}

void    ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size/2)
	{
		ft_swap(tab+i, tab + size - 1 - i);
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	*tabp = &tab[0];
	ft_rev_int_tab(tabp, 5);

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", tab[i]);
	}
	
	return (0);
}*/
