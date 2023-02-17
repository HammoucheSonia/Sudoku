#include "Sudoku.h"

char *ft_strdup(char *str)
{
    int i = 0;
    char *res;

    res = malloc(sizeof(char) * (ft_strlen(str) + 1));
    if (!res)
        return (NULL);
    while (str[i])
    {
        res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

char **creat_sudoku(int argc, char **argv)
{
    int i = 1;
    int j = 0;
    char **tab_sudoku;

    tab_sudoku = malloc(sizeof (char*) * 9);
    if (!tab_sudoku)
        return (NULL);
    while (i < argc)
    {
        tab_sudoku[j] = ft_strdup(argv[i]);
        i++;
        j++;
    }
    return (tab_sudoku);
}

void print_sudoku(char **tab)
{
    int i = 0;
    int j = 0;

    printf("-------------\n");
    while (i < 9)
    {
        printf("|");
        while (j < 9)
        {
            printf("%c", tab[i][j]);
            if ((j+1)%3 == 0)
                printf("|");
            j++;
        }
        printf("\n");
        j = 0;
        if ((i+1)%3 == 0)
            printf("-------------\n");
        i++;
    }
}