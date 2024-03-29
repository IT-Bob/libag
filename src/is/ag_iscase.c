/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ag_iscase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 15:05:10 by aguerin           #+#    #+#             */
/*   Updated: 2018/03/31 15:05:26 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	\file	ag_iscase.c
**	\author	Alexis Guérin
**	\date	5 février 2018
**
**	\brief	Vérification de la casse d'un caractère
*/

/*
**	\brief	Vérifie si un caractère est majuscule
**
**	\param	c	- caractère
**
**	\return **1** si le caractère est majuscule ou **0** sinon
*/

int	ag_isuppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/*
**	\brief	Vérifie si un caractère est minuscule
**
**	\param	c	- caractère
**
**	\return **1** si le caractère est minuscule ou **0** sinon
*/

int	ag_islowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
