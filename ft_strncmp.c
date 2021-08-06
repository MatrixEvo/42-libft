/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:21:16 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 02:21:16 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (str1[count] != '\0' && str2[count] != '\0' && count < (n - 1))
	{
		if (str1[count] != str2[count])
			break ;
		count++;
	}
	return (str1[count] - str2[count]);
}
/*
int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	printf("%d\n", ft_strncmp(argv[1], argv[2], 3));
	printf("%d\n", strncmp(argv[1], argv[2], 3));
	return (0);
}
*/