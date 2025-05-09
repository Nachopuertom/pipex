/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:18:53 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 20:29:11 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Add a node at the start of the list.
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
		new->next = *lst;
	*lst = new;
}
// int main()
// {
// 	printf("------------- FT_LSTADD_FRONT TEST -------------%c\n", '\n');

// 	t_list *list = NULL;

// 	int num1 = 12, num2 = 12, num3 = 230;
// 	ft_lstadd_front(&list, ft_lstnew(&num1));
// 	ft_lstadd_front(&list, ft_lstnew(&num2));
// 	ft_lstadd_front(&list, ft_lstnew(&num3));
// 	t_list	*temp = list;
// 	while (temp)
// 	{
// 		printf("%d -> ", *((int *)temp->content));
// 		temp = temp->next;
// 	}
// 	printf("NULL\n");
// 	printf("\n");
// 	printf("-------------------------------------------------%c\n", '\n');
// 	return 0;
// }