/*
 * File: 6-hash_table_delete.c
 * Auth: Anas Jelloul
*/

#include "hash_tables.h"

/**
 * hash_table_delete - remove hash
 * @ht: pointer shash tabl
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *nd, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			nd = ht->array[i];
			while (nd != NULL)
			{
				temp = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = temp;
			}
		}
	}
	free(hd->array);
	free(hd);
}
