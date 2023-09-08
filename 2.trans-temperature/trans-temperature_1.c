#include <stdio.h>

int main()
{
    float fahr, celsius;  /*华氏度，摄氏度*/
    int lower, upper, steps;

    lower = 0;  /*温度下限*/
    upper = 300;    /*温度上限*/
    steps = 20; /*步长*/

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + steps;
    }
}