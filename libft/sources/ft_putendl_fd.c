/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:09:42 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/14 10:11:29 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		ft_putchar_fd(s[n], fd);
		n++;
	}
	ft_putchar_fd('\n', fd);
}
