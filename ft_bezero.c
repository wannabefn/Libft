void	bezero(void *s, size_t n)
{
	unsigned char		*ptr;
	int	i;

	ptr = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		ptr[i] = 0;
		i++;
	}
}
