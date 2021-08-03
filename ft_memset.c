//#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		((unsigned char *)s)[count] = c;
		count++;
	}
	return (s);
}
/**
int	main(void)
{
	char	str[10];
	char	str1[10];

	strcpy(str, "Apple Pie");
	strcpy(str1, str);
	ft_memset(str, '$', 3);
	memset(str1, '$', 3);
	printf("%s\n", str);
	printf("%s", str1);
}
**/