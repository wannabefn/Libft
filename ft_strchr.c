#include "libft.h"

char	*ft_strchr(char *s, int i)
{
	int	n;

	n = 0;
	while (s[n])
	{
		if (s[n] == i)
			return (s[n]);
		n++;
	}
	return (0);
}
