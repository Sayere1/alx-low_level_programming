#include "hash_tables.h"

/**
 * hash_table_get - func to get key value in a hash table
 * @ht: hash_table char
 * @key: key of the hash table
 * note: ht and key are both pointer type
 * Return: Null if key not found or the value of key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idex;
	hash_node_t *c_node;

	if (ht == NULL || *key == 48 || key == NULL)
		return (NULL);

	idex = key_index((const unsigned char *)key, ht->size);
	if (idex >= ht->size)
		return (NULL);

	for (c_node = ht->array[idex];
	     c_node && strcmp(c_node->key, key) != 0;
	     c_node = c_node->next)
		;
	if (c_node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (c_node->value);
	}
}
