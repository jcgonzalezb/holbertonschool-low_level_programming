/**
 * free_list - function that frees
 * a list_t list.
 * @head: Linked list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
