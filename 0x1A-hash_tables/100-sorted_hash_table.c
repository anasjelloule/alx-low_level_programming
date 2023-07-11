/*
 * File: 100-sorted_hash_table.c
 * Auth: Anas Jelloul
 */

#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creact a new sorted hash table
 * @size: hash table size
 *
 * Return: 
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - ajout element hash table
 * @ht: shash table hashed
 * @key:  kzy to store the hash value
 * @value: value bilong to key hash
 *
 * Return: 0 | 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *nww, *tempo;
	char *val_cp;
	unsigned long int idex;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cp = strdup(value);
	if (val_cp == NULL)
		return (0);

	idex = key_index((const unsigned char *)key, ht->size);
	tempo = ht->shead;
	while (tempo)
	{
		if (strcmp(tempo->key, key) == 0)
		{
			free(tempo->value);
			tempo->value = val_cp;
			return (1);
		}
		tempo = tempo->snext;
	}

	nww = malloc(sizeof(shash_node_t));
	if (nww == NULL)
	{
		free(val_cp);
		return (0);
	}
	nww->key = strdup(key);
	if (nww->key == NULL)
	{
		free(val_cp);
		free(nww);
		return (0);
	}
	nww->value = val_cp;
	nww->next = ht->array[idex];
	ht->array[idex] = nww;

	if (ht->shead == NULL)
	{
		nww->sprev = NULL;
		nww->snext = NULL;
		ht->shead = nww;
		ht->stail = nww;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		nww->sprev = NULL;
		nww->snext = ht->shead;
		ht->shead->sprev = nww;
		ht->shead = nww;
	}
	else
	{
		tempo = ht->shead;
		while (tempo->snext != NULL && strcmp(tempo->snext->key, key) < 0)
			tempo = tempo->snext;
		nww->sprev = tempo;
		nww->snext = tempo->snext;
		if (tempo->snext == NULL)
			ht->stail = nww;
		else
			tempo->snext->sprev = nww;
		tempo->snext = nww;
	}

	return (1);
}


/**
 * shash_table_get - get a shash table by key
 * @ht: A sorted hash table.
 * @key: key bilong to value.
 *
 * Return: NULL | shash_table_
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nd;
	unsigned long int idex;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idex = key_index((const unsigned char *)key, ht->size);
	if (idex >= ht->size)
		return (NULL);

	nd = ht->shead;
	while (nd != NULL && strcmp(nd->key, key) != 0)
		nd = nd->snext;

	return ((nd == NULL) ? NULL : nd->value);
}

/**
 * shash_table_print - print a hash table entry
 * @ht: hash table handle to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->shead;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->snext;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the hash table reversed
 * @ht: hash table handle to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nd;

	if (ht == NULL)
		return;

	nd = ht->stail;
	printf("{");
	while (nd != NULL)
	{
		printf("'%s': '%s'", nd->key, nd->value);
		nd = nd->sprev;
		if (nd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - remove a hash table key
 * @ht: hash table handle  
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *nd, *temp;

	if (ht == NULL)
		return;

	nd = ht->shead;
	while (nd)
	{
		temp = nd->snext;
		free(nd->key);
		free(nd->value);
		free(nd);
		nd = temp;
	}

	free(head->array);
	free(head);
}
