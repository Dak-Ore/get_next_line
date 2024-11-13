/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <rsebasti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 08:59:58 by rsebasti          #+#    #+#             */
/*   Updated: 2024/11/13 10:59:30 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif

# if BUFFER_SIZE < 1
#  define BUFFER_SIZE 1
# elif BUFFER_SIZE > 8000000
#  define BUFFER_SIZE 8000000
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*ft_strchr(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*strndup(char const *s, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strlen(const char *s);

#endif