//#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
/**
int	main(void)
{
	char	*string;

	string = "Apple pie";
	printf("%li\n", ft_strlen(string));
	printf("%li", strlen(string));
}
**/