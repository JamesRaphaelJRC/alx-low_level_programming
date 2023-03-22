#ifndef __FUNCTION_POINTERS_H__
#define __FUNCTION_POINTERS_H__
#include <stdlib.h>

/*
 * File: function_pointers.h
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0E-function_pointers directory.
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
