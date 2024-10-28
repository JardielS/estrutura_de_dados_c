#include <stdio.h>
int main() {
    float salario;
    float imposto;
    float valor_final;

    printf("Digite o salario:");
    scanf("%f" , &salario);
    printf("Salario: %f \n" , salario);

    imposto = salario * 0.10;
    printf("Imposto: %f \n" , imposto);


    valor_final = salario - imposto;
    printf("Salario final: %f \n" , valor_final);







}