/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 04:05:59 by tairribe          #+#    #+#             */
/*   Updated: 2022/05/21 04:51:42 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	if (nb <= 0)
		return (0);
	n = 1;
	while (n * n <= nb)
	{
		if (n >= 46341)
			return (0);
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}
