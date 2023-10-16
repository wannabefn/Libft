#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char		*ptr;
	size_t	i;
	size_t	j;
	
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (s[start] && len --)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	return (ptr);
}
