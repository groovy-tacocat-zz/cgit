#include<stdio.h>

float tempConvert(float cTemp); //Celsius to Fahrenheit Function Prototype

int main()
{
    int lower, upper, step, i;
    float celsius;


    lower = 0;
    upper = 300;
    step = 20;

    for(celsius = lower; celsius <= upper; celsius += step)
    {
        printf("%3.1f %3.1f\n", celsius, tempConvert(celsius));
    }

    return 0;
}

//Celsius to Fahrenheit Function Definition
//Takes float value of the Celsius temperature and returns the Fahrenheit equivalent
//Uses one line for simple arithmetic 
float tempConvert(float cTemp)
{
    return (9.0 / 5.0) * (cTemp + 32.0);

}

