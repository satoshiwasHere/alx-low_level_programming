#include <string.h>
#include "hash_tables.h"


/**
 * hash_table_get - Searches for hash table key and
 * returns corresponding value if key is found
 *
 * @key: The key to get value from hash table.
 * @ht: A pointer to the hash table
 * Return: NULL - if key is not found.
 * else - value of associated key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *value = NULL;
	hash_node_t *node;
	int n = 10;

	if (ht && key)
	{
		if (strlen(key) > 0)
		{
			index = key_index((unsigned char *)key, ht->size);
			if ((ht->array)[index] == NULL)
				return (NULL);

			node = ht->array[index];
			while (node)
			{
				if (strncmp(node->key, key, n) == 0)
					value = node->value;
				node = node->next;
			}
		}
	}
	return (value);
}
