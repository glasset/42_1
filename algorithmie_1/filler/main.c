/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/21 15:05:46 by glasset           #+#    #+#             */
/*   Updated: 2014/01/22 17:54:48 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "filler.h"

void		print(void)
{
	write(1, "1 4\n", 4);
//	e->position = "1 4";
//	ft_putstr(e->position);
}

int			main(void)
{
	t_env	e;

	ft_read(&e);
	return (0);
}

