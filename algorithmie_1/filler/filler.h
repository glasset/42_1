/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/21 14:39:01 by glasset           #+#    #+#             */
/*   Updated: 2014/01/22 17:54:51 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define P_1 'O'
# define P_2 'X'
# include "libft.h"

typedef struct			s_dot
{
	int					x;
	int					y;
}						t_dot;

typedef struct			s_env
{
	char				player;
	char				opponent;
	char				**board;
	char				**piece;
	int					board_size;
	t_dot				piece_size;
	char				*position;
}						t_env;

void					read_board_size(t_env *e);
void					read_board(t_env *e);
void					read_piece(t_env *e);
void					ft_read(t_env *e);
void					print(void);

#endif /* !FILLER_H */
