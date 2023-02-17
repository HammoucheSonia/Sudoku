#include "Sudoku.h"

int main(int argc, char **argv)
{
    parcing(argc, argv);
    print_sudoku(creat_sudoku(argc, argv));

    return (0);
}