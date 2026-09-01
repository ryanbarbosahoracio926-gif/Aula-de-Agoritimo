/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

 float peso, altura, imc;
    printf("Qual o é o peso da pessoa em kg : ");
    scanf("%f", &peso);
    printf("Qual o é altura da pessoa em M : ");
    scanf("%f", &altura);
    imc = peso/(altura * altura);
    printf("O índice de massa corporal é de : %.2f", imc);

    return 0;
}