int area(int base, int altura){
    int area = (base * altura) / 2;
    return area;
}
int main(){
    int base,altura;
    printf("Digite o tamanho do base:");
    scanf("%d", &base);
    printf("Digite o tamanho do altura:");
    scanf("%d", &altura);
    printf("%d", area(base, altura));
    return 0;
}
