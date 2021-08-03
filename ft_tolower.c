//#include "libft.h"

int	ft_tolower(int n)
{
	if (!((n >= 'a') && (n <= 'z')))
		return (n + 32);
	return (n);
}
/*
int	main(void)
{
	printf("%d\n", ft_tolower('A'));
	printf("%d", tolower('A'));
}
*/