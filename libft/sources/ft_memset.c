/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 09:32:12 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/09 11:45:31 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		n;
	char		*b2;

	b2 = NULL;
	b2 = (char*)b;
	n = 0;
	while (n < len)
	{
		b2[n] = (unsigned char)c;
		n++;
	}
	return (b);
}
