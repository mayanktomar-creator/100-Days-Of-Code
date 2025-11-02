#include <stdio.h>

int main(){

    float Celsius;     //let Celsius be variable for temperature in celcius
    printf("Enter Temperature in Celcius :");
    scanf("%f", &Celsius);

    float Fahrenheit = (Celsius*9/5)+32;

    printf("Temperature in fahrenheit is %f\n", Fahrenheit);
    return 0;
    
}