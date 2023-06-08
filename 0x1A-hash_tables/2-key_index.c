#include "hash_tables.h"

/**
 * key_index - get index based on key using djb2 formula
 * @key: key
 * @size: hash size
 *
 * Return: key's index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
