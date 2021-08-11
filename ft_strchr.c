/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:20:48 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/09 15:04:36 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int n)
{
	int		count;
	char	c;

	count = 0;
	c = (char)n;
	while (s[count] != c && s[count] != '\0')
		count++;
	if (s[count] == c)
		return ((char *)s + count);
	return (0);
}

/*
int	main(void)
{
	char	*string;
	
	string = "Aapple Pie";
	printf("%s\n", ft_strchr(string, 'a'));
	printf("%s\n", strchr(string, 'a'));
}
*/