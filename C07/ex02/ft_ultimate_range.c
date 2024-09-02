#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*buffer;
	
	i = 0;
	j = max - min;
	if (min >= max)
	{	
		*range = NULL;
		return (0);
	}
	buffer = (int *)malloc(sizeof(int) * (j + 1));
	if (!buffer)
	{
		*range = NULL;
		return (-1);
	}
	*range = buffer;
	while (max > min)
	{
		buffer[i] = min;
		min++;
		buffer++;
	}
	return (j);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;

	//printf("%d\n", *buffer); (linha 27))
	min = 0;
	max = 9;
	ft_ultimate_range(&tab, min, max);
}*/
