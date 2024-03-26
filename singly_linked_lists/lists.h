#ifndef SINGLY_LISTS
#define SINGLY_LISTS
#include <stddef.h>
/**
 * struct list_a - lista de argumentos
 * @str: string
 * @len: longitud
 * @next: pointer al siguiente nodo
 */
typedef struct list_a
{
char *str;
size_t len;
struct list_a *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif
