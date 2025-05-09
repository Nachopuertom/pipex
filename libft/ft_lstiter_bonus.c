/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 09:58:02 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/25 19:43:47 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief  executes a function for each item in the list
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst->next != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
	if (lst->next == NULL)
		(*f)(lst->content);
}
// void print_content(void *content) {
//     printf("%d -> ", *((int *)content));
// }
// int main() {
// 	int num1 = 10, num2 = 20, num3 = 30;
// 	t_list *list = ft_lstnew(&num1);
// 	t_list *node2 = ft_lstnew(&num2);
// 	t_list *node3 = ft_lstnew(&num3);

// 	list->next = node2;
// 	node2->next = node3;

// 	ft_lstiter(list, print_content);
// 	return 0;
// }
