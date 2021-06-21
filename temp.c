#include<stdio.h>

int main(){
    float _cels;
    printf("Enter the temperature in Celsius unit: \n");
    printf("C* = "); scanf("%f", &_cels);
    printf("Temperature in Fahrenheit is = %f F*",  1.8*_cels+32);
    return 0;
}
