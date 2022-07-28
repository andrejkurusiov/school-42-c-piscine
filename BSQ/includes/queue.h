/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:57:49 by vvagapov          #+#    #+#             */
/*   Updated: 2022/07/20 17:17:32 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H
# define QUEUE_H

# include "stdlib.h"

typedef struct s_node
{
	struct s_node	*next;
	char			*data;
}					t_node;

typedef struct s_queue
{
	struct s_node	*first;
	struct s_node	*last;
}					t_queue;

void	ft_putchar(char c);
void	ft_putstr(char *str);

t_node	*create_elem(char	*data);
t_queue	*create_queue(void);
void	en_queue(t_queue *q, char *data);
void	de_queue(t_queue *q);
void	print_queue(t_queue *q);
void	clean_queue(t_queue *q);
void	delete_queue(t_queue **q);

#endif
