/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 10:29:53 by aguerin           #+#    #+#             */
/*   Updated: 2018/04/02 10:30:01 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	\file	count_word.c
**	\author	Alexis Guérin
**	\date	5 février 2018
**
**	\brief	Calcul du nombre de 'mot' d'une chaîne
*/

/*
**	\brief	Calcul du nombre de 'mot' d'une chaîne
**
**	count_word() renvoie le nombre de mots trouvés dans la chaîne `s`.
**	Le caractère `c` est le caractère de séparation des mots.
**
**	\param	s	- chaîne
**	\param	c	- caractère de séparation des mots
**
**	\return	**nombre (>0)** de mots dans la chaîne
**			ou **0** si la chaîne est est `NULL`
*/

unsigned int	count_word(char *s, char c)
{
	int	i;
	int	cmp;
	int	word;

	i = 0;
	cmp = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && !word)
		{
			cmp++;
			word = 1;
		}
		else if (s[i] == c)
			word = 0;
		i++;
	}
	return (cmp);
}
