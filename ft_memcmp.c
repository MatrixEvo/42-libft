/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 21:41:39 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 21:41:40 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	count;
	char	*str1buffer;
	char	*str2buffer;

	count = 0;
	str1buffer = (char *)str1;
	str2buffer = (char *)str2;
	while (count < n)
	{
		if ((str1buffer[count] != str2buffer[count]))
			return (str1buffer[count] - str2buffer[count]);
		count++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[10] = "Apple pie";
	char	str1[10] = "Apple Pie";

	printf("%d\n", ft_memcmp(str, str1, 10));
	printf("%d", memcmp(str, str1, 10));
}
*/