/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:02:02 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/09 17:53:30 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destbuffer;
	char	*srcbuffer;

	destbuffer = (char *)dest;
	srcbuffer = (char *)src;
	if (dest == src)
		return (dest);
	if (srcbuffer < destbuffer)
	{
		while (n--)
			*(destbuffer + n) = *(srcbuffer + n);
		return (dest);
	}
	while (n--)
		*destbuffer++ = *srcbuffer++;
	return (dest);
}
/*
int	main(void)
{
	char	src[10] = "Apple Pie";
	//char	dest[10];
	char	src1[10] = "Apple Pie";
	//char	dest1[10];

	ft_memmove(src, src + 1, 3 * sizeof(char));
	printf("%s\n", src);
	printf("%p\n", src);
	printf("%p\n\n", ft_memmove(src, src + 1, 3 * sizeof(char)));
	memmove(src1, src1 + 1, 3 * sizeof(char));
	printf("%s\n", src1);
	printf("%p\n", src1);
	printf("%p\n", memmove(src1, src1 + 1, 3 * sizeof(char)));
}
*/