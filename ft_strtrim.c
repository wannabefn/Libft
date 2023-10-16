#include "libft.h"

char	*ft_strtrim(char *s1, char *set)
{
	char		*ptr;
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 0;
	while (s1[i] && s1[i] == set)
		i++;
	while (s1[i] && s1[i] != set)
	{
		i++;
		j++;
	}
	ptr = (char *)malloc(j);
	i = i - j;
	while (j--)
	{
		ptr[n] = s1[i]
		i++;
		n++;
	}
	return (ptr);
}
