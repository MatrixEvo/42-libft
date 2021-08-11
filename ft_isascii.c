/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:20:03 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/12 02:01:36 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int n)
{
	if ((n >= 0) && (n <= 127))
		return (1);
	return (0);
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