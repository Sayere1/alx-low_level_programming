#include "hash_tables.h"

/**
 * hash_table_set - hash table element added
 * @ht: hash table pointer type
 * @key: Type const char pointer of the key
 * @value: key value
 * Return: 0 if fail or 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, idex;
	char *cpy_value;
	hash_node_t *new_ht;

	if (ht == NULL || key == NULL || *key == 48 || value == NULL)
		return (0);

	cpy_value = strdup(value);
	if (cpy_value == NULL)
		return (0);

	idex = key_index((const unsigned char *)key, ht->size);
	for (i = idex; ht->array[i]; ++i)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cpy_value;
			return (1);
		}
	}
	new_ht = malloc(sizeof(hash_node_t));
	if (new_ht == NULL)
	{
		free(cpy_value);
		return (0);
	}
	new_ht->key = strdup(key);
	if (new_ht->key == NULL)
	{
		free(new_ht);
		return (0);
	}
	new_ht->value = cpy_value;
	new_ht->next = ht->array[idex];
	ht->array[idex] = new_ht;

	return (1);
}
