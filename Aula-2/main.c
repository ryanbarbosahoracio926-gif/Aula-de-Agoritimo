/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int quantidade;
    float preco, total;
    
    printf("Digite a quantidade de cafés: ");
    scanf("d%", &quantidade_cafe);
    
    printf("Digite o preço do café: ");
    scanf("f%",&preco);
    
    total = preco*quantidade;
    
    printf("Valor total da conta será: R$ %.2f\n, total");
    
    return 0;
}
