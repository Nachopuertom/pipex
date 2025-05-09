/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:49:24 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 10:49:09 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Iterate over the list, applying a function to each node's content. 
/// Use function del to delete a node's content if necessary.
/// @return A new List
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*first_node;
	t_list	*last_node;

	first_node = NULL;
	last_node = NULL;
	while (lst)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&first_node, del);
			return (NULL);
		}
		new_node->content = (*f)(lst->content);
		new_node->next = NULL;
		if (!first_node)
			first_node = new_node;
		else
			last_node->next = new_node;
		last_node = new_node;
		lst = lst->next;
	}
	return (first_node);
}
// void	*func_one(void *content)
// {
// 	printf("\nNode printed");
// 	return content;
// }
// void	func_del(void *content)
// {
// 	printf("\nNode deleted");
// }
// int main()
// {
// 	int num1 = 10, num2 = 20, num3 = 30;
// 	t_list *list = ft_lstnew(&num1);
// 	t_list *node2 = ft_lstnew(&num2);
// 	t_list *node3 = ft_lstnew(&num3);
// 	list->next = node2;
// 	node2->next = node3;
// 	ft_lstmap(list, func_one, func_del);
// 	free(list);
// 	return 0;
// }
