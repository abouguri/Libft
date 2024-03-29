/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouguri <abouguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:22:56 by abouguri          #+#    #+#             */
/*   Updated: 2023/11/23 02:59:23 by abouguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int n)
{
	return ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z'));
}
