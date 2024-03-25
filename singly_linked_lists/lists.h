#ifndef SINGLY_LISTS
#define SINGLY_LISTS
#include <stddef.h>

typedef struct list_a
{
    char *str;
    size_t len;
    struct list_a *next;
} list_t;

size_t print_list(const list_t *h);
#endif
