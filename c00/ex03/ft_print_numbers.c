/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzambran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:53:48 by jzambran          #+#    #+#             */
/*   Updated: 2023/06/06 12:28:19 by jzambran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	c;

	number = 0;
	while (number <= 9)
	{
		c = '0' + number;
		write(1, &c, 1);
		number++;
	}
}
