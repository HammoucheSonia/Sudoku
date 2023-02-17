#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdlib.h>
#include <stdio.h>

void parcing(int argc, char **argv);
int parcing_line(int argc, char **argv);
int ft_strlen(char *str);
char *ft_strdup(char *str);
char **creat_sudoku(int argc, char **argv);
void print_sudoku(char **argv);

#endif