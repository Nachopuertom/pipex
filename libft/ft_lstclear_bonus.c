/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:25:01 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 20:33:34 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Delete a list with a del function given.
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	while (*lst != NULL)
	{
		next_node = (*lst)->next;
		ft_lstdelone(*lst, *del);
		*lst = next_node;
	}
}

// void del_content(void *content) {

// }

// int main() {
// 	int num1 = 10, num2 = 20, num3 = 30;
// 	t_list	*list = ft_lstnew(&num1);
// 	t_list	*node2 = ft_lstnew(&num2);
// 	t_list	*node3 = ft_lstnew(&num3);

// 	list->next = node2;
// 	node2->next = node3;

// 	printf("Before clear:\n");
// 	t_list	*temp = list;
// 	while (temp) {
// 		printf("%d -> ", *((int *)temp->content));
// 		temp = temp->next;
// 	}
// 	printf("NULL\n");
// 	ft_lstclear(&list, del_content);
// 	if (list == NULL) {
// 		printf("After clear: List is empty\n");
// 	}

// 	return 0;
// }
