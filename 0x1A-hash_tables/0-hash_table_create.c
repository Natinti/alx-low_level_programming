#include "hash_tables.h"

/**
 * hash_table_create - this function that creates the hash table
 *
 * If something goes wrong, the function should return NULL
 *
 * @size: this is the size of the hash table/array
 * Return: this is a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);
	return (new);
}
