#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>

int _putchar(char c);
int len(char *s);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_memcpy(char *dest, char *src, unsigned int n);

void print(char *s);
int isNumber(char*s);
void init(char *s, int l);
void multi(char *s0, char *s1, char *s2, int l[]);
int n(char c);
#endif
