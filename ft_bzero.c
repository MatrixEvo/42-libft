#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		((unsigned char *)s)[count] = '\0';
		count++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[10];
	char	str1[10];

	strcpy(str, "Apple Pie");
	strcpy(str1, str);
	ft_bzero(str, 3);
	bzero(str1, 3);
	printf("%s\n", str);
	printf("%s", str1);
}
*/