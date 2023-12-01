#include "hash_tables.h"

/**
 * hash_table_print - fucntion to print a hash table
 * @ht: hash_table
 * note: ht is a pointer type
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *c_node;
	bool flag = false;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == true)
				printf(", ");

			for (c_node = ht->array[i]; c_node != NULL;
				flag = true)
			{
				printf("'%s': '%s'", c_node->key,
				       c_node->value);
				c_node = c_node->next;
				if (c_node != NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
