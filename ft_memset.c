/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:20:40 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 02:20:41 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
		((unsigned char *)s)[count++] = c;
	return (s);
}
/*
int	main(void)
{
	char	str[10];
	char	str1[10];

	strcpy(str, "Apple Pie");
	strcpy(str1, str);
	ft_memset(str, '$', 3);
	memset(str1, '$', 3);
	printf("%s\n", str);
	printf("%s", str1);
}
*/