#include <stdio.h>
int main(){
    float distancia;
    float velocidade;
    float tempo;

    printf("Digite a distancia:");
    scanf("%f" , &distancia);
    
    printf("Digite a velocidade:");
    scanf("%f" , &velocidade);

    tempo = distancia / velocidade;
    printf("Tempo: %f hr" , tempo);









}