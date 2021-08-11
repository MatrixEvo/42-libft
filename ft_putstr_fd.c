/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:17:08 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/12 03:36:54 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	count;

	count = -1;
	if (!s || !fd)
		return ;
	while (s[++count] != '\0')
		write(fd, &s[count], 1);
}
/*
int	main(void)
{
	ft_putstr_fd("Apple\n", 1);
}
*/