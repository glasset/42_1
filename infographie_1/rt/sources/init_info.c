/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 15:41:58 by glasset           #+#    #+#             */
/*   Updated: 2014/03/26 14:57:09 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "parser.h"

i			*ft_inf(void)
{
	i		*ft;

	ft = malloc(sizeof(ft) * 6);
	ft[0] = &comment_b;
	ft[1] = &nb_light;
	ft[2] = &nb_mesh;
	ft[3] = &pov;
	ft[4] = &look;
	ft[5] = &ambient;
	return (ft);
}

static int	mes_inf(char *line, int l, int tmp, int count)
{
	if (tmp == -1)
	{
		error_p(ft_strsub(line, cut_space(line), ft_strlen(line)),
				"\033[31m[ERROR]\033[0m check value", l);
		exit (0);
	}
	else if (tmp == 0)
		count++;
	return (count);
}

static int	ret_inf(char *str, int c_l, int l, int count)
{
	if (count == 5)
	{
		error_p(str, "\033[32m[OK]\033[0m info initialized", c_l);
		return (l);
	}
	error_p(str, "\033[31m[ERROR]\033[0m Some variable uninitialized in:", c_l);
	return (-1);
}

int			information(t_env *e, int c_l, int fd, char *str)
{
	char	*line;
	int		l;
	i		*ft;
	int		tmp;
	int		count;

	count = 0;
	l = 1;
	ft = ft_inf();
	while (get_next_line(fd, &line))
	{
		if (line[0] == END_OBJ)
			return (ret_inf(str, c_l, l, count));
		if (checkline_inf(line) == -1)
			error_p(ft_strsub(line, cut_space(line), ft_strlen(line)),
					"\033[31m[WARNING]\033[0m unknown line", l + c_l);
		else
			tmp = ft[checkline_inf(line)](e, line);
		count = mes_inf(line, c_l + l, tmp, count);
		free(line);
		l++;
	}
	return (l);
}
