#include <stdio.h>
#include <math.h>


int calcular_raizes(float a, float b, float c, float *x1, float *x2) {
    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        *x1 = (-b + sqrt(delta)) / (2 * a); 
        *x2 = (-b - sqrt(delta)) / (2 * a); 
        return 2; 
    } else if (delta == 0) {
        *x1 = -b / (2 * a); 
        *x2 = *x1;
        return 1;
    } else {
        printf("Não há raízes reais.\n");
        *x1 = *x2 = 0;
        return 0;
    }
}

int main() {
    float a, b, c, x1, x2;
    int num_raizes;

   
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    
    num_raizes = calcular_raizes(a, b, c, &x1, &x2);

    
    printf("Número de raízes: %d\n", num_raizes);
    if (num_raizes > 0) {
        printf("Raiz 1: %.2f\n", x1);
    }
    if (num_raizes == 2) {
        printf("Raiz 2: %.2f\n", x2);
    }

    return 0;
}