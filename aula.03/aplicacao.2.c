/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int hora, minutos, total_minutos;
    printf("Hora?");
    scanf("%d", &hora);
    printf("minutos");
    scanf("%d", &minutos);
    total_minutos = (hora * 60) + minutos;
    printf("ja se passaram %d minutos desde do inicio do dia.\n", total_minutos);
    

    return 0;
}
