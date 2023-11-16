#include "monty.h"

/**
* add - Adds top two elements.
* @head: Head list
* @counter: line number
* Return: Void
**/
void add(stack_t **head, unsigned int counter)
{
	int add_elem;

	if (!head || !(*head) || !(*head)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	add_elem = (*head)->n;
	add_elem += (*head)->next->n;
	pop(head, counter);
	(*head)->n = add_elem;
}

/**
 * sub - subtracts top element ofstack from the second
 * top element of stack.
 * @head: Head list
 * @counter: line number
 * Return: Nothing
 **/

void sub(stack_t **head, unsigned int counter)
{

	if (!head || !(*head) || !(*head)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n -= (*head)->n;
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}

/**
 * mul -  multiplies second top element of stack with top element
 * of the stack.
 * @head: Head list
 * @counter: line number
 * Return: Void
 **/

void mul(stack_t **head, unsigned int counter)
{

	if (!head || !(*head) || !(*head)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n *= (*head)->n;
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}

/**
 * _div - subtracts element from second top element of the stack.
 * @head: Head Stack.
 * @counter: line number.
 * Return: Nothing.
 **/
void _div(stack_t **head, unsigned int counter)
{
	if (!head || !(*head) || !(*head)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", counter);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n /= (*head)->n;
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}
