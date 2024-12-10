#include <stdio.h>
#define PI 3.14
void calcular(double r, double *parea, double *pcomp){
    *parea = PI*(r*r);
    *pcomp = 2*PI*r;    
}
int main()
{
    double area, comp;
    calcular(1, &area, &comp);
    printf("Area = %.2lf \n", area); 
    printf("Comprimento = %.2lf \n", comp); 
    return 0;
}
