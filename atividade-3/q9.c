void exibir_em_real(float real){
    printf("Seu valor: R$%0.2f", real);
}

int main(){
    float valor;
    printf("Digite um valor:");
    scanf("%f",&valor);
    exibir_em_real(valor);
    return 0;
}
