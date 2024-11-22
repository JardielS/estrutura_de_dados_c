#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};  // Inicializando o array com valores
    int sum = 0, i;

    for(i = 0; i < 5; i++){
        sum += numbers[i];
    }

    printf("A soma dos elementos do array é: %d\n", sum);

    return 0;
}
