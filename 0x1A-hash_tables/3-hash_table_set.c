/*
 * File: 3-hash_table_set.c
 * Auth: Anas Jelloul
*/

#include "hash_tables.h"

/**
 * hash_table_set - set key val 
 * @ht: pointer hash table
 * @key: key should not be empty
 * @value: val
 *
 * Return: 0 | 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw;
	char *value_cp;
	unsigned long int idex, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);

	idex = key_index((const unsigned char *)key, htb->size);
	for (i = idex; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	}

	nw = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_cp);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(nw);
		return (0);
	}
	nw->value = value_cp;
	nw->next = ht->array[idex];
	ht->array[idex] = nw;

	return (1);
}
