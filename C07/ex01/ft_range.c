#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*ret;

	i = 0;
	j = max - min;
	if (min >= max)
		return (NULL);
	ret = (int *)malloc(sizeof(int) * (j + 1));
	if (!ret)
		return (NULL);
	while (max > min)
	{
		ret[i] = min;
		printf("%d\n", *ret);
		min++;
		ret++;
	}
	free (ret);
	return (ret);
}

int	main(void)
{		
	int	min;
	int	max;
	
	 //(por na linha 20)
	min = 5;
	max = 89;
	ft_range(min, max);
	return (0);
}
