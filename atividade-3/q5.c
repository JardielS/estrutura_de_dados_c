double calculo_imc(double massa, double altura ){
    double calculo = massa / (altura * altura);
    return calculo;
}
int main(){
    double altura, massa;


    printf("Digite seu peso:");
    scanf("%lf",&massa);
    printf("Digite sua altura:");
    scanf("%lf",&altura);
    
    printf("Seu IMC:%0.2lf\n", calculo_imc(massa,altura));

    return 0;
}
