//#include "libft.h"

int	ft_isascii(int n)
{
	if (!((n >= 000) && (n <= 177)))
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("%d\n", ft_isascii(c));
	printf("%d", isascii(c));
}
*/