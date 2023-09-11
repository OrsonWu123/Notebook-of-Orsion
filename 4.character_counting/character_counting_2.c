#include <stdio.h>

int main()
{
    double nc;

    for (nc = 0; getchar() != 10; ++nc);

    printf("%.0f\n", nc);
}