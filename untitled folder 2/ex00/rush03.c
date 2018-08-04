/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slandaue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 16:33:20 by slandaue          #+#    #+#             */
/*   Updated: 2018/08/04 16:59:37 by slandaue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int x, int y, int width, int length)
{
	if ((length == 1 && width == y) || (width == 1 && length == 1))
		ft_putchar('A');
	else if ((length == x && width == 1) || (length == x && width == y))
		ft_putchar('C');
	else if ((width == 1 || width == y) || (length == 1 || length == x))
		ft_putchar('B');
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
