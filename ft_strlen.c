/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:21:07 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/09 21:20:43 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
/*
int	main(void)
{
	char	*string;

	string = "Apple pie";
	printf("%li\n", ft_strlen(string));
	printf("%li", strlen(string));
}
*/