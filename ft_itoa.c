#include <stdio.h>

int	put_count(int a)
{
	int	n;

	n = 1;
	while (a > 10)
	{
		if (a < 10)
			return (n++);

		else
		{
			a = (a / 10);
			a % 10;
			n++;
		}
	}
	return (n);
}

int	*put_print(int num, char *str)
{

	if (num < 10)
		return (*str = '0' + num);
	else
	{
		put_print(num / 10, str);
		str++;
		*str = '0' + (num % 10);
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	int	i;
	int	j;
	int	s;

	i = 0;
	j = 0;
	s = 0;
	if (n < 0)
	{
		n * -1;
		s++;
	}
	i = put_count(n);
	ptr = (char *)malloc(i + s + 1);
	/*if (n <= 10)
	{
		ptr[0] = n + '0';
		ptr[1] = '\0';
		return (ptr);
	}*/
	ptr = put_print(n, ptr);
	p++;
	*ptr = '\0';
	ptr -= (i);
	return (ptr);
}
int	main()
{
	printf("%s", ft_itoa(-42);
	return (0);
}
