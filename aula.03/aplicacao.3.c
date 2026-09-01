/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int horas_dia, potencia;
   float consumo;
   
   printf("Potêcia do equipamento (W)? ");
   scanf("%d", &potencia);
   printf("Horas de uso pro dia? ");
   scanf("%d", &horas_dia);
   
   consumo = (potencia*horas_dia*30)/1000.f;
   printf("Consumo mensal: %.2f", consumo);
  

    return 0;
}
