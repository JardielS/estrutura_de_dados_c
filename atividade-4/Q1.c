#include <stdio.h>
int main(){
    double s;
    double *p;
    printf("Digite o salario:");
    scanf("%lf",&s);
    p = &s;
    printf("%lf\n%p",*p,&p);
}