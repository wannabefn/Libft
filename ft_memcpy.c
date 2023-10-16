#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	int	i;

	ptr = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ptr[i] = src[i];
		i++;
	}
	return (dest);
}
