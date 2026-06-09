/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrecio-t <jrecio-t@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 10:41:11 by jrecio-t          #+#    #+#             */
/*   Updated: 2026/06/09 10:58:50 by jrecio-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	compute_disorder (int *a) // El parámetro 'a' debera ser un struct o algo que represente la lista de numeros.
{
	int	mistakes;
	int	total_pairs;
	int	i;
	int	j;

	i = 0;
	while (i < size(a) - 1)
	{
		j = i + 1;
		while (j < size(a) - 1)
		{
			total_pairs += 1;
			if (a[i] > a[j])
			{
				mistakes += 1;
			}
		}
	}
	return (mistakes / total_pairs);
}