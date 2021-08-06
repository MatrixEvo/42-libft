/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:21:21 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 02:21:21 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int n)
{
	int	count;

	count = ft_strlen(s);
	while (s[count] != n && count >= 0)
		count--;
	if (s[count] == n)
		return ((char *)s + count);
	return (0);
}
/*
int	main(void)
{
	char	*string;

	string = "Aapple Pie";
	printf("%s\n", ft_strrchr(string, 'p'));
	printf("%s\n", strrchr(string, 'p'));
}
*/