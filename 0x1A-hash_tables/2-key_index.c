#include "hash_tables.h"

/**
 * key_index - Get index key/value
 * @key: index key.
 * @size: The size of the array of the hash table.
 * Return: index key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
