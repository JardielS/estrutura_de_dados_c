#include <stdio.h>

int main(){

    double soma = 0, nota; 
    
    for (int i = 1; i < 5; i++){
        printf("Digite a nota %d: ", i);
        scanf("%lf", &nota);
        soma+= nota;
        

    }
    double media = soma/4;
    printf("soma: %.2lf\n",media);

    if(media >= 7){
        printf("aprovado\n");
    } else if (media < 5){
        printf("Reprovado\n");
    } else{
        printf("Aluno em exame\n");
    }
    
}