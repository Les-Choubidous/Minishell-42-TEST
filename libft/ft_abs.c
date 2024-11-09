/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:16:52 by uzanchi           #+#    #+#             */
/*   Updated: 2024/06/02 18:33:27 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	abs(int nb)
{
	if (!nb)
		return (0);
	if (nb < 0)
		nb = -nb;
	return (nb);
}