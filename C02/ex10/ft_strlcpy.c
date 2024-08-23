//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int		ft_strlen(char *str);

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;

	i = 0;
	if (size != 0)
	{
		while(src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0'; 
	}
	return (ft_strlen(src));
}
/*
int		main(void)
{
	char	src[] = "Ola, Gustavo!";
	char	dest[20];

	printf("src b4: %s\ndest b4: %s\n", src, dest);
	ft_strlcpy(dest,src, 14);
	printf("src: %s\ndest: %s\n", src, dest); 
	return (0);
}*/
