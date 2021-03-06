/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_m.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/01 15:51:23 by glasset           #+#    #+#             */
/*   Updated: 2014/02/02 20:52:38 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "user.h"

int			main(int argc, char **argv)
{
	if (argc != 3)
		ft_printf("Usage: %s pid server \"message\".\n", argv[0]);
	else
		data(ft_atoi(argv[1]), argv[2]);
	return (0);
}
