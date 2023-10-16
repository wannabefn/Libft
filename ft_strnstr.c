#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		while (haystack[i + j] == needle[j] && haystack [i + j] && (i + j) < n)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
