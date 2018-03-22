/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:06:51 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/10 13:49:54 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t n;

	n = 0;
	while (src[n] != '\0' && n < len)
	{
		dst[n] = src[n];
		n++;
	}
	while (n < len)
	{
		dst[n] = '\0';
		n++;
	}
	return (dst);
}
