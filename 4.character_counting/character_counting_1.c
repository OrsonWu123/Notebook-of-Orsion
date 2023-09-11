#include <stdio.h>

int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n",nc);
}

/*在mac系统直接运行可以在第二行用^d键输入EOF，由于有换行符，因此会多计入一个字符*/
