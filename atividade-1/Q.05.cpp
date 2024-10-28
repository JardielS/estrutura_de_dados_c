#include <stdio.h>
int main() {
    float celsius;
    float fahrenheit;
    float kelvin;

    printf("Digite a temperatura em Celsius:");
    scanf("%f" , &celsius);
    printf("Celsius: %f \n" , celsius);

    fahrenheit = celsius * 1.8 + 32;
    printf("Fahrenheit: %f \n" , fahrenheit);


    kelvin = celsius + 273;
    printf("Kelvin %f \n" , kelvin);

    


}