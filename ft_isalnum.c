/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:19:37 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/12 03:11:34 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	if (ft_isalpha(n) || ft_isdigit(n))
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
}
*/