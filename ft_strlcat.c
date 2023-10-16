#include "libft.h"

char	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (dest[i])
		i++;
	while (s < size)
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
