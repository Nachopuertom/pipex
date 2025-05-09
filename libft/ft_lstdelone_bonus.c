/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:18:14 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 20:33:55 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Delete one element of a list 
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}

// void del_content(void *content) {
// }
// int main() {
// 	int num = 42;
// 	t_list *node = ft_lstnew(&num);

// 	printf("Before delete: %d\n", *((int *)node->content));

// 	ft_lstdelone(node, del_content);

// 	printf("After delete: Node is freed.\n");

// 	return 0;
// }
