#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (0);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	while (dest[i])
		i++;
	dest_len = i;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	j = 0;
	while (src[j] && j < size - dest_len - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest_len + src_len);
}

int	main(void)
{
	char	dest[50] = "Dja bu sabi";
	char	src[] = "luva di nike na boh denti";
	printf("%u\n", ft_strlcat(dest, src, 18));
	printf("%lu\n", strlcat(dest, src, 18));
	return (0);
}
