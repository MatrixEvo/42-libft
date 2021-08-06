/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:20:56 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 02:20:56 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	count1;
	size_t	srcsize;
	size_t	destsize;

	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	if (size <= destsize)
		return (size + srcsize);
	count = destsize;
	count1 = 0;
	while (src[count1] != '\0' && (count + 1) < size)
		dest[count++] = src[count1++];
	dest[count] = '\0';
	return (destsize + srcsize);
}
/*
int	main(void)
{
	char	dest[25] = "Apple";
	char	src[25] = "Pie";
	char	dest1[25] = "Apple";
	char	src1[25] = "Pie";

	printf("%lu\n", ft_strlcat(dest, src, 9));
	printf("%lu\n", strlcat(dest1, src1, 9));
	printf("%s\n", dest);
	printf("%s\n", dest1);
}
*/