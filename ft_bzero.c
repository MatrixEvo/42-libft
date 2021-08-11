/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:19:17 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/10 16:40:53 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
		((unsigned char *)s)[count++] = '\0';
}
/*
int	main(void)
{
	char	str[10];
	char	str1[10];

	strcpy(str, "Apple Pie");
	strcpy(str1, str);
	ft_bzero(str, 3);
	bzero(str1, 3);
	printf("%s\n", str);
	printf("%s", str1);
}
*/