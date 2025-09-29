/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstri_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasilev <tvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:44:39 by tvasilev          #+#    #+#             */
/*   Updated: 2023/01/08 10:00:02 by tvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstri_fd(char *s, int fd)
{
	int	i;
	ssize_t	write_result;

	if (s == NULL)
	{
		write_result = write(1, "(null)", 6);
		if (write_result == -1)
			return (-1);
		return (6);
	}
	i = -1;
	while (s[++i])
	{
		write_result = write(fd, &s[i], sizeof(char));
		if (write_result == -1)
			return (-1);
	}
	return (i);
}
