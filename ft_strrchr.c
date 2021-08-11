/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:21:21 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/12 02:11:15 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int n)
{
	int	count;

	count = ft_strlen(s);
	while (count >= 0)
	{
		if (s[count] == (char)n)
			return ((char *)s + count);
		count--;
	}
	return (0);
}
/*
int	main(void)
{
	char	*string;

	string = "Aapple Pie";
	printf("%s\n", ft_strrchr(s, 't' + 256));
	printf("%s\n", strrchr(string, 'p'));
}
*/