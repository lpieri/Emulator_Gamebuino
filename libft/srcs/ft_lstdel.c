/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 21:13:24 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/29 17:39:21 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*todel;

	if (alst && *alst)
	{
		temp = *alst;
		while (temp->next != NULL)
		{
			todel = temp;
			del(todel->content, todel->content_size);
			free(todel);
			todel = NULL;
			temp = temp->next;
		}
		del(temp->content, temp->content_size);
		free(temp);
		temp = NULL;
		*alst = NULL;
	}
}
