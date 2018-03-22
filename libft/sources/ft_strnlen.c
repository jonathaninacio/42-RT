/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 16:12:12 by joinacio          #+#    #+#             */
/*   Updated: 2016/12/23 16:13:37 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(char *str, char c)
{
	size_t	n;

	n = 0;
	if (str)
		while (str[n] && str[n] != c)
			n++;
	return (n);
}