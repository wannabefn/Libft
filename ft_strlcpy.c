#include "libft.h"

char	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
