#ifndef FILE_MAIN.H
#define FILE_MAIN.H
#include <stdio.h>
/**
 * void prototypes()
 * int prototypes()
 * char prototypes()
 */

char *_strcat(char *dest, char *src);
void print_number(int n);
int _putchar(char c);
void print_buffer(char *b, int size);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif /*MAIN_H*/
