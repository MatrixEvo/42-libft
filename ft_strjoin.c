/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:59:01 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/12 00:45:35 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count;
	int		s1len;
	int		s2len;
	char	*res;

	count = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = malloc(s1len + s2len + 1);
	if (!res)
		return (0);
	while (count != s1len && s1len != '\0')
	{
		res[count] = s1[count];
		count++;
	}
	while (count != (s1len + s2len) && s2len != '\0')
	{
		res[count] = s2[count - s1len];
		count++;
	}
	res[count] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	*str1 = "Apple Pie";
	char	*str2 = " is good";
	char	*str = ft_strjoin(str1, str2);
	printf("%s\n", str);
}
*/