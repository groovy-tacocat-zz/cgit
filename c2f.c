#include<stdio.h>

int main()
{  
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    
    printf("  C      F\n");
    printf("-----------\n");

    // Prints Celsius to Fahrenheit table from 0 to 300
    while(celsius <= upper)
    {
        fahr = (9.0 / 5.0) * (celsius + 32.0);
        printf("%3.0f %6.1f\n", celsius, fahr);

        celsius += step;
    }

    //Prints same table in reverse order
    for(celsius = 300.0; celsius >= 0.0; celsius -= 20.0)
    {
        printf("%3.1f %6.1f\n", celsius, (9.0 / 5.0) * (celsius + 32.0));
    }

    return 0;
}
