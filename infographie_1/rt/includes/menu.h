/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebelle <mdebelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 22:52:49 by mdebelle          #+#    #+#             */
/*   Updated: 2014/03/26 18:53:33 by jbalestr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MENU_H
# define MENU_H

# include "ray_tracer.h"

int			count_scene(t_env *e);
int			count_panel(t_env *e);
int			check_scene_name(char *s);

#endif /* !MENU_H */

