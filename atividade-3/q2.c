#include <stdio.h>

int maior(int a, int b){
    if(a > b){
        printf("Maior: %d", a);
    } else {
         printf("Maior: %d", b);
    }

}
int main()
{
    int a, b;
    printf("Insira o primeiro numero:");
    scanf("%d", &a);
    printf("Insira o primeiro numero:");
    scanf("%d", &b);
    maior(a,b);
    return 0;
}
