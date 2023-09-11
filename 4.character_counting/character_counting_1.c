#include <stdio.h>

int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n",nc);
}

/*mac系统在最后可以用^d键输入EOF*/
