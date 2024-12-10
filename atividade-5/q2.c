#include <stdio.h>

void alterar_valores(int *a, int *b){
   (*a)--;
   (*b)++;

}
int main()
{
    int a = 12, b = 20;
    printf("Antes da função: a = %d, b = %d\n", a, b);
    alterar_valores(&a, &b);

    printf("Depois da função: a = %d, b = %d\n", a, b);
    return 0;
}
