/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slandaue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 16:31:06 by slandaue          #+#    #+#             */
/*   Updated: 2018/08/04 17:00:21 by slandaue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int x, int y, int width, int length)
{
	if ((length == x && width == 1) || (length == 1 && width == y))
		ft_putchar('\\');
	else if ((width == 1 && length == 1) || (length == x && width == y))
		ft_putchar('/');
	else if ((width == 1 || width == y) || (length == 1 || length == x))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

int		rush(int x, int y)
{
	int	width;
	int	length;

	width = 1;
	length = 1;
	if (x < 0 || y < 0)
		return (0);
	while (width <= y)
	{
		while (length <= x)
		{
			print(x, y, width, length);
			length++;
		}
		ft_putchar('\n');
		length = 1;
		width++;
	}
	return (0);
}
