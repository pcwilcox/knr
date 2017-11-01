#include <stdio.h>

/* Print Fahrenheit-Celsius table for
        fahr =0, 20, ..., 300 */

int main()
{
    float fahr, celsius;
    int lower, upper,  step;

    lower   = 0;        /* lower limit of temperature table */
    upper   = 300;      /* upper liimit of temperature table */
    step    = 20;       /* step size */

    printf("Fahrenheit\tCelsius\n");
    printf("------------------------\n");
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
