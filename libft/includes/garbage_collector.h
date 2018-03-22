/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_collector.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 10:12:40 by joinacio          #+#    #+#             */
/*   Updated: 2018/02/23 10:12:44 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GARBAGE_COLLECTOR_H
# define GARBAGE_COLLECTOR_H

# include <stdlib.h>
# include <unistd.h>

typedef struct			s_gb_cell
{
	void				*data;
	struct s_gb_cell	*next;
}						t_gb_cell;

#endif
