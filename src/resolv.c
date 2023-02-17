#include "Sudoku.h"

int is_resolv_ligne(char *str)
{
    int i = 0;
    int tab[9];

    while (i<9)
    {
        tab[i] = 0;
        i++;
    }
    i = 0;
    while (str[i])
    {
        tab[atoi(str[i])]++;
        i++;
    }
}