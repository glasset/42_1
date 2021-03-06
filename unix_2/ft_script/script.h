/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   script.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/29 14:56:43 by glasset           #+#    #+#             */
/*   Updated: 2014/04/30 14:21:23 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRIPT_H
#define SCRIPT_H
# include <termios.h>

typedef struct		s_env
{
	int				fd;
	int				fd_master;
	int				fd_slave;
	char			*name;
	char			*path;
	int				pid;
	struct termios	term;
	struct winsize	win;
}					t_env;

t_env				e;

void		gterm();
void		openty(void);
void		init_file(char *name);
void		ft_puts(char *str, int fd);
void		end_file(void);

#endif
