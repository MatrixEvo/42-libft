/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:31:01 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/15 18:58:57 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int	n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0 && n <= 9)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	*ft_setstr(char *str, int n, int len)
{
	int		count;

	count = len - 1;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[count] = (n % 10) + '0';
		n /= 10;
		count--;
	}
	str[len] = '\0';
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_numlen(n);
	str = malloc(len + 1);
	if (!str)
		return (0);
	if (n == 0)
		ft_strlcpy(str, "0", 2);
	if (n == -2147483648)
		ft_strlcpy(str, "-2147483648", 12);
	else
		ft_setstr(str, n, len);
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-12));
}
*/