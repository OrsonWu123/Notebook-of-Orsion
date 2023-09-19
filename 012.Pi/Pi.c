#include <stdio.h>
#include <math.h>

int main()
{

    double pi = 0, m = 0, i = 0;

    while(1){
        m = pow(-1,i+2)*(1/(2*i+1));
        pi = pi + m;

        if (fabs(m) < pow(10, -6))
        break;
        i++;
    }
    printf("%lf\n",4*pi);

}