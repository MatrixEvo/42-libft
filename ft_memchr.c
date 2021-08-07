/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 21:03:30 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 21:03:31 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n && ((char *)str)[count] != c)
		count++;
	if (((char *)str)[count] == c)
		return ((char *)str + count);
	return (0);
}
/*
int	main(void)
{
	char	str[10] = "Apple Pie";
	char	str1[10] = "Apple Pie";

	printf("%s\n", (char *)ft_memchr(str, 'P', 10));
	printf("%s\n", (char *)memchr(str1, 'P', 10));
}
*/