/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:26:04 by glasset           #+#    #+#             */
/*   Updated: 2013/12/10 17:08:14 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
	{
		s1[i] = s2[n];
		i++;
		n++;
	}
	s1[i] = '\0';
	return (s1);
}