#include <stdio.h>
int main(){

    float altura;
    float largura;
    float area;
    float perimetro;
    printf("Digite a altura:");
    scanf("%f" , &altura);
    
    printf("Digite a largura:");
    scanf("%f" , &largura);
    
    area = altura * largura;
    printf("area:  %f \n" , area);

    
    perimetro = 2 * altura + 2 * largura;
    printf("perimetro:  %f \n" , perimetro);





}