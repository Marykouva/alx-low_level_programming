#include "stdio.h"
#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	listint_t *j = h;

	if j == NULL
	       	return (0);

	while (j != NULL)
	{
		printf("%d\n", j->n);
		num++;
		j = j->next;
	}
	return (num);
}
