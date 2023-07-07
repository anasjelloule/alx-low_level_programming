/*
 * File: 1-djb2.c
 * Auth: Anas Jelloul
 */

#include "hash_tables.h"

/**
 * hash_djb - djb2 algorithm.
 * @str:  string for  hashing.
 *
 * Return: hash calculated
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int ct;

	hsh = 5381;
	while ((ct = *str++))
		hsh = ((hsh << 5) + hsh) + ct;

	return (hsh);
}
