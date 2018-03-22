/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:03:51 by joinacio          #+#    #+#             */
/*   Updated: 2017/06/28 01:24:33 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	n;

	n = ft_strlen(s);
	if ((ptr = (char*)malloc(sizeof(char) * (n + 1))) == NULL)
		return (NULL);
	n = 0;
	while (s[n] != '\0')
	{
		ptr[n] = s[n];
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
