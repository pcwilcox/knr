#include <stdio.h>

/* Print Celsius-Fahrnheit table for
        Celsius=-40, -20, ... 120 */

int main()
{
    float fahr, celsius;
    int lower, upper,  step;

    lower   = -40;        /* lower limit of temperature table */
    upper   = 120;      /* upper liimit of temperature table */
    step    = 10;       /* step size */

    printf("Celsius\t\tFahrenheit\n");
    printf("------------------------\n");
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = 1.8 * celsius + 32.0;
        printf("%3.0f\t\t%6.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}
