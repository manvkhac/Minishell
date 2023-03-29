/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manvkhac <manvkhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:50:41 by manvkhac          #+#    #+#             */
/*   Updated: 2023/03/30 00:53:35 by manvkhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	pwd(void)
{
	char	cwd[1024];

	if (getcwd(cwd, 1024))
	{
		ft_putendl_fd(cwd, 1);
		return (0);
	}
	perror("pwd: ");
	return (-1);
}