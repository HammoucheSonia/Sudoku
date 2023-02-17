#include "Sudoku.h"

int complet(char **str)
{
    int i = 0;
    int j = 0;

    while (str[i])
    {
        while(str[i][j])
        {
            if (str[i][j] == ' ')
                return (0);
            j++;
        }
        j = 0;
        i++;
    }
    return (1);
}

void resolv(char **tab)
{
    int i = 0;
    int j = 0;

    while (complet(tab) == 0)
    {
        if (i == 8)
            i = 0;
        while(tab[i][j])
        {
            if (tab[i][j] == ' ')
                tab[i][j] = nb_manquant(i, j, tab) + '0';
            j++;
        }
        j = 0;
        i++;
    }
}

int nb_manquant(int i, int j, char **tab)
{
    return (0);
}

