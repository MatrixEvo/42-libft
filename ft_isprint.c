//#include "libft.h"

int	ft_isprint(int n)
{
	if (!((n >= 040) && (n <= 176)))
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	c;

	c = ' ';
	printf("%d\n", ft_isprint(c));
	printf("%d", isprint(c));
}
*/