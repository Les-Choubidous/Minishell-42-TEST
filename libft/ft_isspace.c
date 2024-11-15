/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzanchi <uzanchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:26:05 by uzanchi           #+#    #+#             */
/*   Updated: 2024/11/15 12:26:46 by uzanchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isspace(int c)
{
    if (c == ' ' || (c >= 9 && c <= 13))
        return (1);
    else
        return (0);
}
