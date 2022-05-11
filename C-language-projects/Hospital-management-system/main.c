#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "menu.h"
void clearScreen()
{    printf("\n\n");
     printspace(47);
     printf("Press Any Key To Continue...");
     getchar();
     system("cls");


}
int main()
{
//
//    loading();
//    clearScreen();
//    WELCOME();
//    clearScreen();
    mainMenu();
    return 0;
}
