/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/01 16:15:29 by glasset           #+#    #+#             */
/*   Updated: 2014/02/02 20:19:02 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <signal.h>
#include "user.h"

int				tab[8];
static int		oc = 0;

void			get_bin(int c)
{
	int			a;

	a = c % 2;
	c = c / 2;
	if (c > 0)
		get_bin(c);
	tab[oc++] = a;
}

void			send_signal(int pid)
{
	int			t;

	t = 0;
	while (t < (8 - oc))
	{
		kill(pid, SIGUSR1);
		usleep(100);
		t++;
	}
	t = 0;
	while (t < oc)
	{
		if (tab[t++] == 1)
			kill(pid, SIGUSR2);
		else 
			kill(pid, SIGUSR1);
		usleep(100);
	}
	oc = 0;
}

void			data(int pid, char *msg)
{
	int			i;

	i = 0;
	while(msg[i])
	{
		get_bin((int)msg[i++]);
		send_signal(pid);
	}
	get_bin((int)'\n');
	send_signal(pid);

}