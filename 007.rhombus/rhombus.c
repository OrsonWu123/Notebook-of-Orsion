#include <stdio.h>

int line(int a, int b)
{
    for(int i =  0; i < a; i++){
        printf(" ");
    }
    for(int j =  0; j < b; j++){
        printf("#");
    }
    for(int i =  0; i < a; i++){
        printf(" ");
    }
    printf("\n");

    return 0;
}

int main()
{
    int n,a,b;

    printf("Please input n: ");
    scanf("%d",&n);

    int number = 2*n+1;

    for(int i = 0; i < number/2+1; i++){
        a = n - i;
        b = 2*i + 1;
        line(a,b);
    }
    for(int i = 0; i < number/2; i++){
        a = i+1;
        b = (n - i -1)*2 +1;
//      b = number - 2*(i+1);
        line(a,b);
    }

    return 0;

}