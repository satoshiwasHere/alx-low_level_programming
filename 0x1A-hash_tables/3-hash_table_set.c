#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - inserts new element into a hash table
 * @ht: pointer to hash table for set up.
 * @key: The key for hash table
 * @value: The value paired with the key
 * Return: on failure - 0
 * success - 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hashIndex = 0;
	char *value_dup = NULL, *key_dup = NULL;
	hash_node_t *new_node = NULL, *tmp_node = NULL;

	if (!ht || !key || !value)
		return (0);
	if (strlen(key) == 0)
		return (0);
	value_dup = strdup(value);
	key_dup = strdup(key);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = key_dup;
	new_node->value = value_dup;
	new_node->next = NULL;
	hashIndex = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[hashIndex] != NULL)
	{
		tmp_node = (ht->array)[hashIndex];
		while (tmp_node)
		{
			if (strcmp(tmp_node->key, key_dup) == 0)
			{
				free(ht->array[hashIndex]->value);
				ht->array[hashIndex]->value = value_dup;
				free(key_dup);
				free(new_node);
				return (1);
			}
			tmp_node = tmp_node->next;
		}
		tmp_node = (ht->array)[hashIndex];
		new_node->next = tmp_node;
		(ht->array)[hashIndex] = new_node;
	}
	else
		(ht->array)[hashIndex] = new_node;
	return (1);
}
