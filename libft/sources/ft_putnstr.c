/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 10:21:35 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/25 10:26:02 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr(char *s, int n)
{
	write(1, s, n);
}
