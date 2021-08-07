#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*rtn;
	size_t	len;

	len = ft_strlen(s) + 1;
	rtn = malloc(sizeof(char) * len);
	if (!rtn)
		return (0);
	rtn = ft_memcpy(rtn, s, len);
	return (rtn);
}

int main(void)
{
	char source[] = "GeeksForGeeks\n";

	// A copy of source is created dynamically
	// and pointer to copy is returned.
	char* target = strdup(source);

	printf("%s", target);
	return 0;
}
