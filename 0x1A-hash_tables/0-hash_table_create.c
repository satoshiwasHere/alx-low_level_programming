#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a new hash table.
 * @size: size of the arrray
 * Return: error - Null. else point to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_table = NULL;

	new_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		new_table = NULL;
		return (NULL);

	}
	for (; i < size; i++)
		(new_table->array)[i] = NULL;
	return (new_table);
}
