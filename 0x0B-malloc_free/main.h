#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int len(char *s);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int cheack(char **array, char *str, int l,int state);
#endif
