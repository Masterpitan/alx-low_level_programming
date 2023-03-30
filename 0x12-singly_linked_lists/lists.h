#ifndef LISTS_H
#define LISTS_H
/**
 * struct lists_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of string
 * @next: points to next node
 * Description: singly linked list node structure for Holberton project
 */
typedef struct lists_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
