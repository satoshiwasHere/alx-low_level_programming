#include <stdlib.h>

typedef struct hash_node_s
{
    char * key;
    char * value;
    struct hash_node_s *next;
}
hash_node_t;

typedef struct hash_table_s {
    unsigned long int size;
    hash_node_t **array;
}

hash_table_t;

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;
    
    if (size < 1)
        return NULL;
    
    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return NULL;
    
    new_table->array = malloc(size * sizeof(hash_node_t *));
    if (new_table->array == NULL)
        return NULL;
    
    new_table->size = size;
    return new_table;
}
