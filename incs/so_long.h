/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebengtss <ebengtss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:46:43 by ebengtss          #+#    #+#             */
/*   Updated: 2024/06/28 14:34:12 by ebengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H

# define SO_LONG_H

# include <fcntl.h>
# include "../libft/incs/libft.h"
# include "../minilibx-linux/mlx.h"

typedef struct s_data
{
	int			xp;
	int			yp;
	int			cp;
	int			xe;
	int			ye;
	int			ce;
	int			ise;
	t_collec	*lcol;
	int			ccol;
	char		**map;
	void		*mlx;
	void		*win;
}				t_data;

typedef struct s_checkdata
{
	int		ccol;
	int		mcol;
	int		ise;
	int		isf;
	char	**map;
}			t_checkdata;

t_checkdata	*clonestruct(t_data *gdata);

char		**clonemap(char **map);

void		ft_freemain(t_data *gdata);

void		ft_freevalidmap(t_checkdata *tmpgdata);

void		ft_freemakemap(char *buff, char *tmpbuff, char *tmpmap);

void		ft_printmap(char **map);

void		adddata(char c, t_data *gdata, int x, int y);

void		takecol(t_data *gdata);

int			checkmap(char **map);

int			makemap(int fd, t_data *gdata);

int			getmapdata(t_data *gdata);

int			getlinedata(t_data *gdata, int y);

int			checkmapdata(t_data *gdata);

int			ismapvalid(t_data *gdata);

int			processmap(int fd, t_data *gdata);

int			listen_inputs(int key, t_data *gdata);

int			testmap(t_checkdata *gdata, int x, int y);

int			isdir(t_data *gdata, char pos);

#endif