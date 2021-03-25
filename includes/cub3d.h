/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinbekim <jinbekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 02:56:52 by jinbekim          #+#    #+#             */
/*   Updated: 2021/03/26 05:14:41 by jinbekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include "keycode.h"
# include "../libft/includes/libft.h"
# include "structure.h"
# include "../mlx_beta/mlx.h"

# define MVSPD 0.2
# define RTSPD 0.08

/*floor_ceil.c*/
void	floor_ceil(t_config *config);

/*wall.c*/
void	wall(t_config *config);
double	ft_abs(double x);

/*ray_cast.c*/
void	ray_cast(int x, t_ray *ray, t_config *config);

/*sprite.c*/

/*init_ptr.c*/
void	init_config(t_config *config);
void	init_ptr(t_config *config);

/*mouse_move.c*/
int	mouse_move(int x, int y, t_config *config);

/*key_control.c*/
int	key_control(int key, t_config *config);

/*game_close.c*/
int	game_close(void *param);

/*parse_config3.c*/
int	parser_r(char *line, t_config *config);
int	parser_tex(char *line, t_tex *tex);
int	parser_bg(char *line, int *color);

/*parse_config2.c*/
void	set_map_conf(t_config *config);

/*parse_config.c*/
int	parse_config(const char *file_path, t_config *config);

/*erro_exit.c*/
void	error_exit();

#endif