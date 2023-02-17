#include "Sudoku.h"

int main(int argc, char **argv)
{
    char **tab_game;

    parcing(argc, argv);
    tab_game =  creat_sudoku(argc, argv);
    print_sudoku(tab_game);
    printf("##############################\n");
    resolv(tab_game);
    print_sudoku(tab_game);

    return (0);
}