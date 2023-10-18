#include <stdio.h>
#include <stdlib.h>

int	put_count(int a)
{
	int	n;

	n = 1;
        
	while (a >= 10)
	{
		a = (a / 10);
		n++;
        }
	return (n);
}

char	*put_print(int num, char *str)
{
	if (num >= 10)
	{
		str = put_print(num / 10, str);
	}
	*str = '0' + (num % 10);
	return str+1;
}
char	*sp(void)
{
	char	*ptr;

	ptr = (char *)malloc(12);
	ptr[0] = '-';
	ptr[1] = '2';
	ptr[2] = '1';
	ptr[3] = '4';
	ptr[4] = '7';	
	ptr[5] = '4';	
	ptr[6] = '8';	
	ptr[7] = '3';	
	ptr[8] = '6';	
	ptr[9] = '4';	
	ptr[10] = '8';	
	ptr[11] = '\0';	
	return (ptr);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	char		*start;
	int	i;
	int	s;

       	i = 0;
	s = 0;
	if (n == -2147483648)
		return (sp());
	if (n < 0)
	{
		n *= -1;
		s++;
	}
	i = put_count(n);
	ptr = (char *)malloc(i + s + 1);
	if (!(ptr))
		return (NULL);
	start = ptr;
	if (s > 0)
		ptr[0] = '-';
	ptr = put_print(n, (ptr + s));
	ptr++;
	*ptr = '\0';
        return (start);
}
int main() {

  printf("%s", ft_itoa(-2147483648));
  return 0;
}
