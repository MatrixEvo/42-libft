/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:21:32 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/12 01:44:11 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int n)
{
	if ((n >= 'a') && (n <= 'z'))
		return (n - 32);
	return (n);
}
/*
int	main(void)
{
	printf("%d\n", ft_toupper('a'));
	printf("%d", toupper('a'));
}
*/