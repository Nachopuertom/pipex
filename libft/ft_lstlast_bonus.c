/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpuerto- <jpuerto-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:46:42 by jpuerto-          #+#    #+#             */
/*   Updated: 2025/01/19 16:38:20 by jpuerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief  Find last element of a list
/// @return last element
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}
// int main()
// {
// 	t_list *lst;
// 	t_list *lst2;
// 	t_list *lst3;
// 	lst = ft_lstnew("first");
// 	lst2 = ft_lstnew("second");
// 	lst3 = ft_lstnew("hola");
// 	lst->next = lst2;
// 	lst2->next = lst3;
// 	lst3->next = NULL;
// 	t_list *last = ft_lstlast(lst);
// 	printf("%s\n", (char *)last->content);
// 	return 0;
// }
