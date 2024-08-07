/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_imgs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebengtss <ebengtss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:41:44 by ebengtss          #+#    #+#             */
/*   Updated: 2024/07/04 14:29:22 by ebengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/so_long.h"

void	*xtoi(t_data *gdata, char *file)
{
	int	hi;
	int	wi;

	hi = gdata->hi;
	wi = gdata->wi;
	return (mlx_xpm_file_to_image(gdata->mlx, file, &wi, &hi));
}

int	initialize_imgs3(t_data *gdata, t_textures *tltex)
{
	tltex->ml = xtoi(gdata, "./texs/map/ml.xpm");
	tltex->mtl = xtoi(gdata, "./texs/map/mtl.xpm");
	tltex->mtr = xtoi(gdata, "./texs/map/mtr.xpm");
	tltex->mbl = xtoi(gdata, "./texs/map/mbl.xpm");
	tltex->mbr = xtoi(gdata, "./texs/map/mbr.xpm");
	tltex->me1 = xtoi(gdata, "./texs/map/me1.xpm");
	tltex->me2 = xtoi(gdata, "./texs/map/me2.xpm");
	tltex->mo1 = xtoi(gdata, "./texs/obstacles/mo3.xpm");
	if (!(tltex->mtl) || !(tltex->mtr) || !(tltex->mbl) || !(tltex->mbr)
		|| !(tltex->me1) || !(tltex->me2) || !(tltex->mo1) || !(tltex->ml))
		return (ft_freetexs1(gdata), 1);
	gdata->ltex = tltex;
	return (0);
}

int	initialize_imgs2(t_data *gdata, t_textures *tltex)
{
	tltex->mf = xtoi(gdata, "./texs/map/mf.xpm");
	tltex->mt = xtoi(gdata, "./texs/map/mt.xpm");
	tltex->mr = xtoi(gdata, "./texs/map/mr.xpm");
	tltex->mb = xtoi(gdata, "./texs/map/mb.xpm");
	if (!(tltex->mf) || !(tltex->mt) || !(tltex->mr) || !(tltex->mb))
		return (ft_freetexs1(gdata), 1);
	initialize_imgs3(gdata, tltex);
	return (0);
}

int	initialize_imgs1(t_data *gdata)
{
	t_textures	*tltex;

	tltex = malloc(sizeof(t_textures));
	if (!tltex)
		return (1);
	tltex->collec = xtoi(gdata, "./texs/cols/col.xpm");
	tltex->p1 = xtoi(gdata, "./texs/joueur/p3.xpm");
	if (!(tltex->collec) || !(tltex->p1))
		return (ft_freetexs1(gdata), 1);
	initialize_imgs2(gdata, tltex);
	return (0);
}
