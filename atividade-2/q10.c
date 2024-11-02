#include <stdio.h>

int menu(){
    printf("1 – Adicionar\n");
    printf("2 – Editar\n");
    printf("3 – Pesquisar\n");
    printf("4 – Remover\n");
    printf("0 – Sair\n");
    printf("Escolha uma opção: ");
    return 0;
}

int main(){
    int opcao;
    do {
        menu();
        scanf("%d", &opcao);
        if (opcao == 1){
            printf("Adicionar\n");
        } else if(opcao == 2){
            printf("Editar\n");
        } else if(opcao == 3){
            printf("Pesquisar\n");
        } else if(opcao == 4){
            printf("Remover\n");
        } else if (opcao == 0){
            printf("Sair\n");
        } else {
            printf("Não existe essa opção\n");
        }
    } while(opcao != 0);
///
    return 0;
}
