/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:55:18 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/18 20:19:23 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Add node at the end of a list
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int main()
// {
// 	printf("------------- FT_LSTADD_BACK TEST -------------%c\n", '\n');

// 	t_list *list = NULL;

// 	int num1 = 12, num2 = 12, num3 = 230;
// 	ft_lstadd_back(&list, ft_lstnew(&num1));
// 	ft_lstadd_back(&list, ft_lstnew(&num2));
// 	ft_lstadd_back(&list, ft_lstnew(&num3));
// 	t_list	*temp = list;
// 	while (temp)
// 	{
// 		printf("%d -> ", *((int *)temp->content));
// 		temp = temp->next;
// 	}
// 	printf("NULL\n");
// printf("\n");
// printf("-------------------------------------------------%c\n", '\n');
// 	return 0;
// }