#include "Sudoku.h"

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int parcing_line(int argc, char **argv)
{
    int i = 1;
    while (i < argc)
    {
        if (ft_strlen(argv[i]) != 9)
            return(0);
        i++;
    }
    return (1);
}

void parcing(int argc, char **argv)
{
    if (parcing_line(argc, argv) == 0)
        exit(1);
}