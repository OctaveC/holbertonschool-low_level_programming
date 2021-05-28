#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 *
 * @key: key connected to a value in our hash
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
