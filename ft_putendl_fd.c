/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:00:43 by rafaria           #+#    #+#             */
/*   Updated: 2023/11/20 17:18:13 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	char suka[] = "\n";
	int size;
	size = ft_strlen(s);
	
	write(fd, s, size);
	write(fd, suka, 1);
	
}

// int main()
// {
// 	char s[] = "bonjou comment ca va";
// 	ft_putend_fd(s, 1);
// }