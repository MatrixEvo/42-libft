/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:21:27 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 02:21:28 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int n)
{
	if (!((n >= 'a') && (n <= 'z')))
		return (n + 32);
	return (n);
}
/*
int	main(void)
{
	printf("%d\n", ft_tolower('A'));
	printf("%d", tolower('A'));
}
*/