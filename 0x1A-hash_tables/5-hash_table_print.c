#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

int not_last_node(const hash_table_t *ht, hash_node_t *node);

/**
 * hash_table_print - prints the contents of a hash table
 * @ht: hash table to print
 */
void print_hash_table(const hash_table_t *ht)
{
        if (ht == NULL)
                return;
        putchar('{');
        print_table_contents(ht);
        printf("}\n");
}

void print_table_contents(const hash_table_t *ht)
{
        unsigned long int i = 0, last_pos = 0;
        hash_node_t *node = NULL;
        get_last_position(ht, &last_pos);
        for (i = 0; i <= last_pos; i++)
        {
                node = ht->array[i];
    }
