/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int manha, tarde, total;
    printf("quantidade recebida pela manha? ");
    scanf("%d", &manha);
    printf("quanridade recebida pela tarde? ");
    scanf("%d", &tarde);
    total= manha + tarde;
    printf("no total foram  recebidos no dia: %d", total);

    return 0;
}
