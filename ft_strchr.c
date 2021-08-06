/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:20:48 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 02:20:49 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int n)
{
	int	count;

	count = 0;
	while (s[count] != '\0' && s[count] != n)
		count++;
	if (s[count] == n)
		return ((char *)s + count);
	return (0);
}
/*
int	main(void)
{
	char	*string;

	string = "Aapple Pie";
	printf("%s\n", ft_strchr(string, 'p'));
	printf("%s", strchr(string, 'p'));
}
*/