//#include "libft.h"

int	ft_toupper(int n)
{
	if (!((n >= 'A') && (n <= 'Z')))
		return (n - 32);
	return (n);
}
/*
int	main(void)
{
	printf("%d\n", ft_toupper('a'));
	printf("%d", toupper('a'));
}
*/