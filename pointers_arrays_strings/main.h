#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x04-pointers_arrays_strings directory.
 */

#include <stdlib.h>

int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
size_t _strlen(const char *str);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);

#endif




#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * File: holberton.h
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x05-pointers_arrays_strings directory.
 */

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif

#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * File: holberton.h
 * Auth: Brennan D Baraban
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x06-pointers_arrays_strings directory.
 */

#include <stddef.h>

int _putchar(char c);
void *_memset(void *s, int c, size_t n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
