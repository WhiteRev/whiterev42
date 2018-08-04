/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 13:30:43 by ereali            #+#    #+#             */
/*   Updated: 2018/08/04 14:08:36 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print(int x, int y, int width, int length)
{
	if ((width == 1 && length == 1) || (length == x && width == 1)
		|| (length == 1 && width == y) || (length == x && width == y))
		ft_putchar('o');
	else if (width == 1 || width == y)
		ft_putchar('-');
	else if (length == 1 || length == x)
		ft_putchar('|');
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
