/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <raica-ba@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:34:52 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/21 19:04:00 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (word && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!word && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			word = 0;
		}
		else
			word = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "42LisboA ta nA+casa";
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}*/
