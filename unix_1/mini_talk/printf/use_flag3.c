/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_flag3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 13:28:31 by glasset           #+#    #+#             */
/*   Updated: 2013/12/21 11:27:24 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "printf.h"

int				use_perc(char c)
{
	write(1, &c, 1);
	return (1);
}
