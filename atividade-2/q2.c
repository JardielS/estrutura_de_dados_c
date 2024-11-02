#include <stdio.h>

int main(){
   int velocidade;
   int calculo;
    printf("Digite sua velocidade:");
    scanf("%d", &velocidade);

    if(velocidade >=80){
        calculo = (velocidade - 80) * 10;
        printf("Multa: %d\n", calculo);
        
    }   
   


}