#include <stdio.h>
int main(){

    float altura;
    float base;
    float area;
    printf("Digite a altura:");
    scanf("%f" , &altura);

    printf("Digite a base:");
    scanf("%f" , &base);

    area = altura * base /2;
    printf("%f" , area);
}