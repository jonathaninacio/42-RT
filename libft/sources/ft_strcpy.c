/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 09:37:03 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/10 13:47:10 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int n;
	int len;

	n = 0;
	len = ft_strlen(src);
	while (src[n] != '\0')
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = '\0';
	while (n < len)
	{
		dst[n] = '\0';
		n++;
	}
	return (dst);
}
