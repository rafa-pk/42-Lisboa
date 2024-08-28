/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:45:40 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/28 13:24:04 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	printhex(unsigned char n)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[n / 16], 1);
	write(1, &hex[n % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			printhex(str[i]);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Ola\nesta bem?";
	ft_putstr_non_printable(str);
	return (0);
}*/
