/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:30:28 by joinacio          #+#    #+#             */
/*   Updated: 2017/01/02 13:44:53 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			n;
	const char	*s_result;

	s_result = NULL;
	n = 0;
	while (s[n] != '\0' && s[n] != (unsigned char)c)
		n++;
	if (s[n] == (unsigned char)c)
		s_result = &s[n];
	else
		s_result = NULL;
	return ((char*)s_result);
}
