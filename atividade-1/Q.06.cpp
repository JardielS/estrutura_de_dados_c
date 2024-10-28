#include <stdio.h>
int main() {
    float salario;
    float imposto;

    printf("Digite o salario:");
    scanf("%f" , &salario);
    printf("Salario: %f \n" , salario);

    imposto = salario * 0.10;
    printf("Imposto: %f \n" , imposto);




}