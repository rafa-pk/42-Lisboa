//#include <stdio.h>
#include <unistd.h>

int		ft_char_is_printable(char c);
void	ft_putstr_non_printable(char *str);

int		ft_char_is_printable(char c)
{
	return (c >= 32  && c <= 126);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[str[i] / 16], 1); 
			write(1, &"0123456789abcdef"[str[i] % 16], 1);
		}
		i++;
	}

}
/*
int		main(void)
{
	char	str[] = "Ola\nesta bem?";
	ft_putstr_non_printable(str);
	return (0);
}*/
