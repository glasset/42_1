/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarais <gmarais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 14:17:13 by gmarais           #+#    #+#             */
/*   Updated: 2014/03/09 15:52:33 by gmarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance.h"

int		ft_sum(int n)
{
	int		i;

	i = 0;
	if (n > 0)
	{
		while (n)
			i += n--;
	}
	return (i);
}
