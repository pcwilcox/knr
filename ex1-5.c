#include <stdio.h>

/* Print the Fahrenheit-Celsius table */

int main()
{
    int fahr;
    printf("Fahrenheit\tCelsius\n");
    printf("------------------------\n");
    for (fahr = 300; fahr >=0; fahr -= 20)
    {
        printf("%3d \t\t %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    };
    return 0;
}
