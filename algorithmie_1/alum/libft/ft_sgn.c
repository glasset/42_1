/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarais <gmarais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:24:28 by gmarais           #+#    #+#             */
/*   Updated: 2014/01/19 20:19:58 by gmarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sgn(int nbr)
{
	if (nbr < 0)
		return (-1);
	if (nbr == 0)
		return (0);
	return (1);
}