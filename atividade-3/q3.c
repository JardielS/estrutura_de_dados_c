#include <stdio.h>

double notas(double num){
    double media = num / 3;
    return media; 
}
int main(){

    double num;
    int i = 0;
    double soma = 0;
    for (int i = 1; i <= 3; i++){
        printf("Digite a nota:");
        scanf("%lf", &num);
        soma = soma + num;
       
        } 
        
    printf("Media: %0.2lf", notas(soma));



    return 0;
}
