#include "monty.h"

/**
 * swap - Swap the top two elements in the stack.
 * @head: Head list
 * @counter: line number
 * Return: Nothing
 **/

void swap(stack_t **head, unsigned int counter)
{
	int tmp;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	tmp = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = tmp;
}

/**
 * nop - empty.
 * @head: Head list
 * @counter: line number
 * Return: Void
 **/
void nop(stack_t **head, unsigned int counter)
{

	(void) head;
	(void) counter;
}
