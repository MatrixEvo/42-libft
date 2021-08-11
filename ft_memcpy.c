/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:20:31 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/12 03:27:41 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	if (!dest && !src)
		return (0);
	while (count < n)
	{
		((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
		count++;
	}
	return (dest);
}
/*
int	main(void)
{
	//char	src[10] = "Apple Pie";
	//char	dest[50] = "abcdefghijklmnopqrstuvwxyz";
	//char	src1[10] = "Apple Pie";
	//char	dest1[50] = "abcdefghijklmnopqrstuvwxyz";

	ft_memcpy("            ", ((void *)0), 17);
	//memcpy(dest1, src1, sizeof(src1));
	//printf("%s\n", dest);
	//printf("%s\n", dest1);
}
*/