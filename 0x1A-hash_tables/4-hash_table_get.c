/*
 * File: 4-hash_table_get.c
 * Auth: Anas Jelloul
*/

#include "hash_tables.h"

/**
 * hash_table_get - ge hashedd by key
 * @ht: pointer hash table.
 * @key: ket to get by
 *
 * Return: some valie
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nd;
	unsigned long int idex;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idex = key_index((const unsigned char *)key, ht->size);
	if (idex >= ht->size)
		return (NULL);

	nd = ht->array[idex];
	while (nd && strcmp(nd->key, key) != 0)
		nd = nd->next;

	return ((nd == NULL) ? NULL : nd->value);
}
