/*
 * File: 5-hash_table_print.c
 * Auth: Anas Jelloul
*/

#include "hash_tables.h"

/**
 * hash_table_print - print passed hash table.
 * @ht: pointer hash table to print.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int i;
	unsigned char cm_flg = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (cm_flg == 1)
				printf(", ");

			nd = ht->array[i];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			cm_flg = 1;
		}
	}
	printf("}\n");
}
