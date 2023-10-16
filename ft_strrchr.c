#include "libft.h"

char	*ft_strrchr(char *s, int i)
{
	int	l;
	
	l = 0;
	while (s[l])
		l++;
	while (l--)
	{
		if (s[l] == i)
			return (s[l]);
	}
	return (0);
}
