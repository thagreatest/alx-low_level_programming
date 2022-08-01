#include "hash_tables.h"
/**
 *hash_table_create- creats a hash table
 *@size : size of the hash table
 *Return: the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	/*allocating memory for array*/
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht->array);
		return (NULL);
	}
	return (ht);
}
/**
 *hash_table_set- sets a value to a key in the hash table
 *@ht: hash table
 *@key: key to set
 *@value: value to set
 *Return: 0 on success, 1 on error
 */