#include <stdio.h>

/* Print the Fahrenheit-Celsius table */

#define     LOWER   0
#define     UPPER   300
#define     STEP    20

int main()
{
    int fahr;
    printf("Fahrenheit\tCelsius\n");
    printf("------------------------\n");
    for (fahr = UPPER; fahr >=LOWER; fahr -= STEP)
    {
        printf("%3d \t\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    };
    return 0;
}
