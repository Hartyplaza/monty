#include "monty.h"
/**
 * free_all - free the memory in the stack
 * @head: Head list
 * Return: Nothing
 **/

void free_all(stack_t **head)
{
	stack_t *tmp;
	stack_t *head_list;

	head_list = *head;

	while (head_list)
	{
		tmp = head_list;
		head_list = head_list->next;
		free(tmp);
	}
}
