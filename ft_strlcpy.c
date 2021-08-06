/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:21:01 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 02:21:02 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	count = 0;
	if (size == 0)
		return (srcsize);
	while (src[count] != '\0' && count < size - 1)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (srcsize);
}
/*
int	main(void)
{
	char	dest[25] = "Appleabcdefghi";
	char	src[25] = "ApplePie";
	char	dest1[25] = "Appleabcdefghi";
	char	src1[25] = "ApplePie";

	printf("%lu\n", ft_strlcpy(dest, src, 2));
	printf("%lu\n", strlcpy(dest1, src1, 2));
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%s\n", dest1);
	printf("%s\n", src1);
}
*/