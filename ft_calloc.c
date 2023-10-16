#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*ptr;
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if (count == 0 || size == 0)
		i = 1;
	else
		i = count * size;
	ptr = malloc(i);
	if (!ptr)
		return (NULL);
	while (j < i)
	{
		ptr[j] = 0;
		j++;
	}
	return (ptr);
}	
