/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_ppm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalestr <jbalestr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 14:07:19 by jbalestr          #+#    #+#             */
/*   Updated: 2014/03/05 15:04:09 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include "ray_tracer.h"

char			*ft_itoa(int n)
{
	char		ret[11];
	char		*r;
	int			neg;
	int			i;
	int			j;

	j = 0;
	i = 0;
	neg = n < 0 ? -1 : 1;
	while (neg * n > 9 || neg * n < 0)
	{
		ret[i++] = '0' + neg * (n % 10);
		n = n / 10;
	}
	ret[i++] = '0' + neg * n;
	if (neg < 0)
		ret[i++] = '-';
	if ((r = (char *)malloc(sizeof(char) * i)) == NULL)
		return (NULL);
	r[i] = '\0';
	while (i--)
		r[i] = ret[j++];
	return (r);
}

int				save_ppm(t_env *e)
{
/*	t_img		*img;
	int			fd;
	int			i;
	int			j;
	int			k;

	img = &e->screens[RAY_TRACE].background;
	if ((fd = open("save.ppm", O_CREAT | O_TRUNC | O_WRONLY) < 2))
		return (0);
	write(fd, "P6\n", 3);
	write(fd, ft_itoa(WIDTH), ft_strlen(ft_itoa(WIDTH)));
	write(fd, " ", 1);
	write(fd, ft_itoa(HEIGHT), ft_strlen(ft_itoa(HEIGHT)));
	write(fd, "\n255\n", 5);
	j = -1;
	while (++j < HEIGHT)
	{
		i = -1;
		while (++i < WIDTH)
		{
			k = y * img->size_line + (x * img->bpp);
			if (k > 0 && k < img->max_size)
			{
				write(fd, &img.img[k], 1);
				write(fd, &img.img[k + 1], 1);
				write(fd, &img.img[k + 2], 1);
			}
		}
	}
	close(fd);*/
	e = e;
	return (1);
}