/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebengtss <ebengtss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:51:22 by ebengtss          #+#    #+#             */
/*   Updated: 2024/07/04 14:29:59 by ebengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/so_long.h"

void	ft_freetexs4(t_data *gdata)
{
	if (gdata->ltex->mbl)
		mlx_destroy_image(gdata->mlx, gdata->ltex->mbl);
	if (gdata->ltex->me1)
		mlx_destroy_image(gdata->mlx, gdata->ltex->me1);
	if (gdata->ltex->me2)
		mlx_destroy_image(gdata->mlx, gdata->ltex->me2);
	if (gdata->ltex->mo1)
		mlx_destroy_image(gdata->mlx, gdata->ltex->mo1);
	free(gdata->ltex);
}

void	ft_freetexs3(t_data *gdata)
{
	if (gdata->ltex->mt)
		mlx_destroy_image(gdata->mlx, gdata->ltex->mt);
	if (gdata->ltex->mr)
		mlx_destroy_image(gdata->mlx, gdata->ltex->mr);
	if (gdata->ltex->mb)
		mlx_destroy_image(gdata->mlx, gdata->ltex->mb);
	if (gdata->ltex->ml)
		mlx_destroy_image(gdata->mlx, gdata->ltex->ml);
	if (gdata->ltex->mtl)
		mlx_destroy_image(gdata->mlx, gdata->ltex->mtl);
	if (gdata->ltex->mtr)
		mlx_destroy_image(gdata->mlx, gdata->ltex->mtr);
	if (gdata->ltex->mbr)
		mlx_destroy_image(gdata->mlx, gdata->ltex->mbr);
	ft_freetexs4(gdata);
}

void	ft_freetexs2(t_data *gdata)
{
	if (gdata->ltex->mf)
		mlx_destroy_image(gdata->mlx, gdata->ltex->mf);
	ft_freetexs3(gdata);
}

void	ft_freetexs1(t_data *gdata)
{
	if (gdata->ltex->collec)
		mlx_destroy_image(gdata->mlx, gdata->ltex->collec);
	if (gdata->ltex->p1)
		mlx_destroy_image(gdata->mlx, gdata->ltex->p1);
	ft_freetexs2(gdata);
}
