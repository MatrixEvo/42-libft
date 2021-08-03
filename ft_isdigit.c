//#include "libft.h"

int	ft_isdigit(int n)
{
	if (!((n >= '0') && (n <= '9')))
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	c;

	c = '1';
	printf("%d\n", ft_isdigit(c));
	printf("%d", isdigit(c));
}
*/