# include "libft.h"

/*
Paramètres : 
lst: L’adresse du ptr vers le premier élément de la liste.
new: L’adresse du ptr vers l’élément à rajouter à la liste.

Retour : Aucun

Description :
Ajoute l’élément ’new’ au début de la liste.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
