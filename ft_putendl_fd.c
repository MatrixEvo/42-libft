/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:47:11 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/12 03:37:07 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (!s || !fd)
		return ;
	while (s[count] != '\0')
		write(fd, &s[count++], 1);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	ft_putendl_fd("Apple", 1);
}
*/