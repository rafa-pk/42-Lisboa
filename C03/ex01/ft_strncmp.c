/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raica-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:06:57 by raica-ba          #+#    #+#             */
/*   Updated: 2024/08/26 18:59:46 by raica-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;	

	i = 0;
	while (i <= n && s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}
/*
int	main(void)
{
	unsigned int	n;
	char	s1[] = "Health";
	char	s2[] = "Stealth";

	n = 2;
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
	return (0);
}*/
