#include "libft.h"


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((!(unsigned char *) src || !(unsigned char *) dest) && n > 0)
		printf("Hi\n");
	//if (dest == src || n > 0)
	//	return (dest);
	return (0);
}

int	main(void)
{
	char	*src = "";
	char	*dest;
	//char	src1[10] = "Apple Pie";
	//char	dest1[10];

	ft_memmove(dest, src, sizeof(src));
	printf("%s\n", dest);
	printf("%p\n", dest);
	//printf("%p\n\n", ft_memmove(dest, src, sizeof(src)));
	//memmove(dest1, src1, 10);
	//printf("%s\n", dest1);
	//printf("%p\n", dest1);
	//printf("%p\n", memmove(dest1, src1, 10));
}
