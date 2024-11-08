double avaliacao(double a){
   return (a >= 7) ? 0 : 1;

}
int main()
{
    double media;

    printf("Digite a media do aluno: ");
    scanf("%lf", &media);

    int resultado = avaliacao(media);
    if (resultado == 0) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
