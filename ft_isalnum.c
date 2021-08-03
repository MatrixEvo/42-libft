//#include "libft.h"

int	ft_isalnum(int n)
{
	if (!(((n >= 'a') && (n <= 'z')) || ((n >= 'A') && (n <= 'Z'))
			|| ((n >= '0') && (n <= '9'))))
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("%d\n", ft_isalnum(c));
	printf("%d", isalnum(c));
}
*/