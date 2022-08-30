# include "libft.h"

/*
Paramètres :
lst: Le début de la liste.

Retour :
Taille de la liste

Description :
Compte le nombre d’éléments de la liste.
*/


int ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}