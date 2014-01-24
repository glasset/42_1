/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/22 11:35:53 by glasset           #+#    #+#             */
/*   Updated: 2014/01/24 21:19:05 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include "filler.h"

void			read_board_size(t_env *e)
{
	char		*line;
	char		**tmp;
	int			i;

	line = NULL;
	i = 0;
	get_next_line(0, &line);
	tmp = ft_strsplit(line, ' ');
	e->board_size = ft_atoi(tmp[1]);
	e->board = (char **)malloc(sizeof(char *) * e->board_size + 1);
	while (i < e->board_size)
	{
		e->board[i] = (char *)malloc(sizeof(char) * ft_atoi(tmp[2]) + 1);
		i++;
	}
	get_next_line(0, &line);
	free(line);
}


void			read_board(t_env *e)
{
	char		*line;
	char		**tmp;
	int			i;

	i = 0;
	while (i < e->board_size)
	{
		get_next_line(0, &line);
		tmp = ft_strsplit(line, ' ');
		e->board[i] = tmp[1];
		i++;
	}
	e->board_size_len = ft_strlen(tmp[1]);
	e->board[i] = '\0';
	get_next_line(0, &line);
	tmp = ft_strsplit(line, ' ');
	e->piece_size.x = ft_atoi(tmp[1]);
	e->piece_size.y = ft_atoi(tmp[2]);
}

void			read_piece(t_env *e)
{
	char		*line;
	int			i;

	i = 0;
	e->piece = (char **)malloc(sizeof(char *) * e->piece_size.x + 1);
	while (i < e->piece_size.x)
	{
		get_next_line(0, &line);
		e->piece[i] = (char *)malloc(sizeof(char) * e->piece_size.y + 1);
		e->piece[i] = line;
		i++;
	}
	e->piece[i] = '\0';
}

void			ft_read(t_env *e)
{
	char		*line;

	get_next_line(0, &line);
	e->player = P_1;
	if (line[10] == '2')
	{
		e->player = P_2;
		e->opponent = P_1;
	}
	while (420)
	{
		read_board_size(e);
		read_board(e);
		read_piece(e);
		use_piece(e);
	//	freedom(e);
	}
	//free tab
}
