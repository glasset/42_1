/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   light.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/11 15:48:11 by glasset           #+#    #+#             */
/*   Updated: 2014/02/14 19:11:14 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <math.h>
#include "rtv.h"

#include <stdio.h>

double			ft_light(t_vec *c, t_vec *light)
{
	double		dist;
	double		angle;
	double		intensity;

	dist = sqrt(pow((light->x - c->x), 2.0) + pow((light->y - c->y), 2.0) +
			pow((light->z - c->z), 2.0));
	angle = acos((c->x * light->x + c->y * light->y + c->z * light->z) /
			(sqrt(pow(c->x, 2.0) + pow(c->y, 2.0) + pow(c->z, 2.0)) *
			sqrt(pow(light->x, 2.0) + pow(light->y, 2.0) + pow(light->z, 2.0))));
	if (angle > 1.5707)
		intensity = 0.1;
	else if (angle == 0.0)
		intensity = 1.0;
	else
	{
		intensity = 1 / (0.9 + angle * dist + pow(angle, 2.0) * pow(dist, 2.0));
	}
	return (intensity);
}

t_vec			shadow(t_ray *ray, t_vec *point, int bol, t_vec *light)
{
	t_vec		spot;
	t_vec		result;

	spot.x = light->x - point->x;
	spot.y = light->y - point->y;
	spot.z = light->z - point->z;
	norme(&spot);
	if (bol == 1)
		result = sphere(ray, &spot, light);
	else
	{
		result = plan(ray, &spot, light);
		result.z = result.y;
	}
	return (result);
}

double			find_light(t_ray *ray, double dist, double index, int bol)
{
	t_vec		point;
	t_vec		result;
	t_vec		light;

	light.x = 0.0;
	light.y = 0.0;
	light.z = 60.0;
	index = index;
	find_dot(&point, dist, &ray->ori, &ray->dir);
	result = shadow(ray, &point, bol, &light);
	if (result.z != -1.0)
		return (ft_light(&point, &light));
	else
		return (0.1);
}

