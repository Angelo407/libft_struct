#include "libft.h"

/*
Paramètres : content : Le contenu du nouvel élément

Retour : Le nouvel élément

Description : 
Alloue (avec malloc(3)) et renvoie un nouvel élément. 
La variable membre ’content’ est initialisée à l’aide
de la valeur du paramètre ’content’. 
La variable ’next’ est initialisée à NULL.
*/


t_list	*ft_lstnew(void	*content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}