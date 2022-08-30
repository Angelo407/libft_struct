# include "libft.h"


int main (void)
{
//	t_list	list;
	
	//int		nbr1;
	//int		nbr2;
	//int		nbr3;
	//int		nbr4;

	//nbr1 = 2;
	//nbr2 = 5;
	//nbr3 = 12;
	//nbr4 = 18;	
	//ft_lstnew(nbr1);
	//ft_lstnew(&nbr2);
	//ft_lstnew(&nbr3);
	//ft_lstnew(&nbr4);

	int	content;

	content = 2;

	ft_lstnew(&content);

	printf("ft_lstnew(&content) = %d\n", ft_lstnew(&content));


//	printf("ft_lstnew(&nbr1) = %d | ft_lstnew(&nbr2) = %d | ft_lstnew(&nbr3) = %d | ft_lstnew(&nbr4) = %d\n", ft_lstnew(&nbr1), ft_lstnew(&nbr2), ft_lstnew(&nbr3), ft_lstnew(&nbr4));


	return (0);
}

/*
int main (void)
{
	t_list	*newlist;

	int		nbr;

	nbr = 2;


	newlist = ft_lstnew(&nbr);

	nbr = newlist->content;

	//printf("newlist = %d\n", newlist.nbr);
	printf("newlist = %d\n", newlist->content);
	//printf("newlist = %d\n", newlist->nbr);

	return (0);
}
*/
