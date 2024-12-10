#include <stdio.h>

double calcular(double *pcomprimento, double *plargura, double *perimetro){
    *perimetro = 2 *(*pcomprimento + *plargura);
    return *pcomprimento * *plargura;

}
int main(){
    double comprimento, area, perimetro, largura;
     printf("Digite o comprimento do retângulo: ");
    scanf("%lf", &comprimento);

    printf("Digite a largura do retângulo: ");
    scanf("%lf", &largura);

    area = calcular(&comprimento, &largura, &perimetro);
    printf("Área do retângulo: %.2lf\n", area);
    printf("Perímetro do retângulo: %.2lf\n", perimetro);
  
    return 0;
}
