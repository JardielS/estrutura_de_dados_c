#include <stdio.h>
int main(){
    float raio;
    float area;
    float comprimento;

    printf("Digite o raio:");
    scanf("%f" , &raio);

    area = 3.14 * raio * raio;
    printf("area: %f \n" , area);

    comprimento = 2 * 3.14 * raio;
    printf("comprimento: %f \n" , comprimento);




}