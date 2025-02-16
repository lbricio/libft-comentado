/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbricio- <lbricio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 01:09:22 by lbricio-          #+#    #+#             */
/*   Updated: 2021/05/24 01:15:17 by lbricio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') 
		|| (c >= 'a' && c <= 'z') 
		|| (c >= '0' && c <= '9'));
}
