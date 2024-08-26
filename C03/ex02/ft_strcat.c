//#include <string.h>
//#include <stdio.h>

int		ft_strlen(char *arr);
char 	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int		main(void)
{
	char	src[] = "Mohcota";
	char	dest[15] = "Mekie";
	printf("%s\n", ft_strcat(dest, src));
	//printf("%s", strcat(dest, src));
	return (0);
}*/
