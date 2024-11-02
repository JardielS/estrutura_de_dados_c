#include <stdio.h>

int main(){
    int velocidade;
    printf("Digite sua velocidade:");
    scanf("%d", &velocidade);

    if(velocidade <=80){
        printf("Verde\n");
    } 
    else {
        printf("Vermelho\n");
    }




}