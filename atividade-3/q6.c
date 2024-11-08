int area(int l){
    int area = l*l;
    return area;
}
int main(){
    int lado;
    printf("Digite o tamanho do lado:");
    scanf("%d", &lado);
    printf("%d", area(lado));
    return 0;
}
