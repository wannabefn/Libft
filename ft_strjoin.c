#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int	i;
	int	j;
	char		*ptr;

	i = strlen(s1);
	j = strlen(s2);
	ptr = (char *)malloc(s1 + s2 + 1);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ptr[j] = s1[i];
		i++;
		j++;
	}
	i = 0
	while (s2[i])
	{
		ptr[j] = s2[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
