#include <stdio.h>

int main(){
    double salario;
    double imposto;
    double inss;
    printf("Insira seu salario:");
    scanf("%lf", &salario);

    if(salario > 2000){
        imposto = salario * 0.15;
        inss = salario * 10;
    } else{
        imposto = 0;
        inss = salario * 0.07;
    }
    printf("Salario:R$ %.2lf\n", salario);
    printf("Imposto de renda:R$ %.2lf\n", imposto);
    printf("INSS:R$ %.2lf\n", inss);
}
