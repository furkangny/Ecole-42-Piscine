/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukati <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 01:08:28 by mukati            #+#    #+#             */
/*   Updated: 2023/02/06 21:05:17 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_putstr(char *str)
{	
	while (*str != '\0')
	{
		char *c;

		write(1, *c, 1);
		str++;
	}
}
int	main()
{
	char *c = "Hello";
	ft_putstr(c);
}
