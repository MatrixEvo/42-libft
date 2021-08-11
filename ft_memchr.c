/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 21:03:30 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/12 01:53:35 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if (((char *)str)[count] == (char)c)
			return ((char *)str + count);
		count++;
	}
	return (0);
}
/*
int	main(void)
{
	//char	str[10] = "Apple Pie";
	//char	str1[10] = "Apple Pie";
	char s[] = {0, 1, 2 ,3 ,4 ,5};

	printf("%s\n", (char *)ft_memchr(s, 2 + 256, 3));
	//printf("%s\n", (char *)memchr(s, 0, 0));
}
*/