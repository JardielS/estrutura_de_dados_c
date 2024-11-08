void impar_par(int n){
    if(n % 2 == 0){
        printf("Par");
    } else{
        printf("Impar");
    }
}

int main()
{

    int num; 
    printf("Digite um numero:");
    scanf("%d",&num);
    impar_par(num);
    return 0;
}
