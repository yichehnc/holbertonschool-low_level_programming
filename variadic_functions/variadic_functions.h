#ifndef __VARIADIC_FUNCTIONS__
#define __VARIADIC_FUNCTIONS__

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - Structure used to match operator with corresponding
 * function
 *
 * @ftype: String representation of the operator
 * @f: Function pointer for which operation to be used
 *
 */

typedef struct type
{
	char *ftype;
	void (*f)(va_list args);
} type;

void print_int(va_list args);
void print_char(va_list args);
void print_str(va_list args);
void print_float(va_list args);

#endif
