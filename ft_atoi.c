/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:30:58 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 22:30:59 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= '\t' && c <= '\r') || c == '\40')
		return (1);
	return (0);
}

int	ft_atoi(const char *ptr)
{
	int	result;
	int	count;
	int	multiplier;

	result = 0;
	count = 0;
	multiplier = 1;
	while (ft_isspace(ptr[count]))
		count++;
	if (ptr[count] == '+' || ptr[count] == '-')
	{
		if (ptr[count] == '-')
			multiplier *= -1;
		count++;
	}
	while (ptr[count] >= '0' && ptr[count] <= '9')
	{
		result *= 10;
		result += (int)(ptr[count] - '0');
		count++;
	}
	return (result * multiplier);
}
/*
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char *str = argv[1];
		printf("%d", ft_atoi(str));
	}
}
*/