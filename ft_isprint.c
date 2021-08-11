/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:20:24 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/12 02:02:42 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int n)
{
	if ((n >= 32) && (n <= 126))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = ' ';
	printf("%d\n", ft_isprint(c));
	printf("%d", isprint(c));
}
*/