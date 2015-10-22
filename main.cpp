#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

char grid[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();

void Print(int myInt)
{
    printf("My int is %d", myInt);
}

int main()
{
    printf("Hello, world!\n");
    Print(20);
    return 0;
}


