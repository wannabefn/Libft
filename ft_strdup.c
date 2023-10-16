#include "libft.h"

char	*ft_strdup(char *s)
{
	char		*ptr;
	int	strlen;
	int	i;

	strlen = 0;
	i = 0;
	//if (*s == '\0')
	//	return (s);
	while (s[strlen])
		strlen++;
	ptr = (char *)malloc(strlen + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
