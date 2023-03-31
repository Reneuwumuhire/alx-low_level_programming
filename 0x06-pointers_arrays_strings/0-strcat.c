#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, const char *src)
{
	int dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	for (int src_len = 0; src[src_len] != '\0'; src_len++, dest_len++)
		dest[dest_len] = src[src_len];
	dest[dest_len] = '\0';
       
	return dest;
}
