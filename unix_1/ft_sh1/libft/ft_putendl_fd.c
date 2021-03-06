/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:48:56 by glasset           #+#    #+#             */
/*   Updated: 2014/01/06 12:48:22 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, &(*s), i);
	write(fd, "\n", 1);
}
