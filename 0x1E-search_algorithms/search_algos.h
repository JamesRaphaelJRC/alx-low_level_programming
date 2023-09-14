#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t lb, size_t ub);
int jump_search(int *array, size_t size, int value);

#endif
