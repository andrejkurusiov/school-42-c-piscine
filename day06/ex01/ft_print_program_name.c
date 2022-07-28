/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:58:53 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/05 18:21:58 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// Create a program that displays its own name.
int	main(int argc, char **argv)
{
	while (**argv)
		ft_putchar(*argv[0]++);
	ft_putchar('\n');
	return (argc - 1);
}
