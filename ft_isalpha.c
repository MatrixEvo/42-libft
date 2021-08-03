//#include "libft.h"

int	ft_isalpha(int n)
{
	if (!(((n >= 'a') && (n <= 'z')) || ((n >= 'A') && (n <= 'Z'))))
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("%d\n", ft_isalpha(c));
	printf("%d", isalpha(c));
}
*/