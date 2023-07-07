/*
 * File: 2-key_index.c
 * Auth: Anas Jelloul
*/

#include "hash_tables.h"

/**
 * key_index -  index of hashtable value
 * @key: key value
 * @size: size array hshedd table
 *
 * Return: return val
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
