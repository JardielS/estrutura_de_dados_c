int sucessor(int a){
    int sucessor = a +1;
    return sucessor;
}

int main(){
    int num;
    printf("Digite um numero:");
    scanf("%d", &num);
    printf("Sucessor:%d", sucessor(num));
    return 0;
}
