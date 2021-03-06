/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 16:00:55 by glasset           #+#    #+#             */
/*   Updated: 2013/12/29 16:00:59 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "pushswap.h"

l_lst				*lst_new(void)
{
	l_lst			*tmp;

	tmp = (l_lst *)malloc(sizeof(l_lst));
	if (tmp)
	{
		tmp->len = 0;
		tmp->end = NULL;
		tmp->start = NULL;
	}
	return (tmp);
}

l_lst				*lst_add_end(l_lst *l_x, int num)
{
	t_lst			*tmp;

	if (l_x)
	{
		tmp = (t_lst *)malloc(sizeof(t_lst));
		if (tmp)
		{
			tmp->num = num;
			tmp->next = NULL;
			if (l_x->end == NULL)
			{
				tmp->prev = NULL;
				l_x->start = tmp;
				l_x->end = tmp;
			}
			else
			{
				l_x->end->next = tmp;
				tmp->prev = l_x->end;
				l_x->end = tmp;
			}
			l_x->len++;
		}
	}
	return (l_x);
}

l_lst				*lst_add_start(l_lst *l_x, int num)
{
	t_lst			*tmp;
	if (l_x)
	{
		tmp = (t_lst *)malloc(sizeof(t_lst));
		if (tmp)
		{
			tmp->num = num;
			tmp->next = NULL;
			if (l_x->end == NULL)
			{
				tmp->next = NULL;
				l_x->start = tmp;
				l_x->end = tmp;
			}
			else
			{
				l_x->start->prev = tmp;
				tmp->next = l_x->start;
				l_x->start = tmp;
			}
			l_x->len++;
		}
	}
	return (l_x);
}
