#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	num;
	
	i = 0;
	j = 0;
	num = 0;
	while (str[i] == ' ' || str[i] <= 13)
		i++;
	if (str[i] == '-')
	{
		j++;
		i++
	}
	else
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num = str[i] + '0';
		i++;
	}
	return (num);
}
