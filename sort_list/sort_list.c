
//#include<stdio.h>
//
//typedef struct s_list t_list;
//
//struct s_list
//{
//	int     data;
//	t_list  *next;
//};
//

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list * c = lst;
	
	int tmp; 
	while (lst->next != 0)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = c; 
		}
		else 
			lst = lst->next; 
	}

	return c;
}

//int ascending(int a, int b)
//{
//	return (a <= b);
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	t_list *lst;
//
//	lst = (t_list*)malloc(sizeof(t_list));
//	lst->data = 20;
//	lst->next = (t_list*)malloc(sizeof(t_list));
//	lst->next->data = 10;
//	lst->next->next = (t_list*)malloc(sizeof(t_list));
//	lst->next->next->data = 0;
//	lst->next->next->next = NULL;
//
//	lst = sort_list(lst, ascending);
//
//	while (lst != NULL)
//	{
//		printf("%d\n", lst->data);
//	    lst = lst->next;
//	}
//
//	return (0);
//}
//
