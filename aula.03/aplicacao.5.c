/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {

    float largura, comprimento, valor;
    float area, caixas, total;

    printf("Digite a largura: ");
    scanf("%f", &largura);

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);

    printf("Digite o valor da caixa: ");
    scanf("%f", &valor);

    area = largura * comprimento;
    caixas = area / 2.5;
    total = caixas * valor;

    printf("Area: %.2f\n", area);
    printf("Caixas: %.2f\n", caixas);
    printf("Total: R$ %.2f\n", total);

    return 0;
}