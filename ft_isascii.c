/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:20:03 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 02:20:06 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int n)
{
	if (!((n >= 000) && (n <= 177)))
		return (0);
	return (1);
}
/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("%d\n", ft_isascii(c));
	printf("%d", isascii(c));
}
*/