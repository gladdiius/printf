#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putnum(int x);
void _print_number(int c);
int _putchar2(char *c);
char *_concat(char c, int i);
int _putchar1(char c);
int count(int x);
#endif
