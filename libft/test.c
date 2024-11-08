#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

void	*foo(void *content)
{
	int nb = ft_atoi(content) * -1;
	return (ft_itoa(nb));
}

void delet(void *content)
{
	free (content);
}

int main(void)
{
	t_list	*head = NULL;

	int counter = 0;
	int nb_of_node = 10;
	int start = 1;

	while (counter < nb_of_node)
	{
		ft_lstadd_back(&head, ft_lstnew(ft_itoa(start)));
		counter++;
		start++;
	}

	t_list	*ptr = head;
	while (ptr)
	{
		printf ("%s\n", (char *)ptr ->content);
		ptr = ptr -> next;
	}
	t_list	*first_node = head;

	void *(*ptr_func)(void *) = foo;

	void(*ptr_del)(void *) = delet;


	t_list *new = ft_lstmap(head, ptr_func, ptr_del);


	ptr = new;
	while (ptr)
	{
		printf ("%s\n", (char *)ptr ->content);
		ptr = ptr -> next;
	}
	return (0);
}