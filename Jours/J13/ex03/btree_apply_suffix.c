/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/18 09:07:50 by adespond          #+#    #+#             */
/*   Updated: 2015/09/18 09:19:02 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root->left != 0)
		btree_apply_suffix(root->left, (*applyf));
	if (root->right != 0)
		btree_apply_suffix(root->right, (*applyf));
	(*applyf)(root->item);
}
