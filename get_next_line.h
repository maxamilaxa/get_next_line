/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 19:15:37 by mkopiika          #+#    #+#             */
/*   Updated: 2019/03/05 19:17:37 by mkopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"

# define BUFF_SIZE 32

typedef struct			s_lst
{
	char				b[BUFF_SIZE + 1];
	char				*sl;
	char				*p_nl;
	char				*ptr;
	ssize_t				rd;
	int					fd;

	struct s_lst		*next;
}						t_lst;

int						get_next_line(const int fd, char **line);

#endif
