#include <stdio.h>

int main()
{
    long nc;
    int c;

    nc = 0;
    while (1){
        if((c = getchar()) == 10)
            break;
        else
            nc++;
    }
    printf("字符数目为%ld个\n", nc);

    return 0;
}

/*
-这是改写出来的一个程序，
但这和书上写的完全不一样，
因为书上的那个死活不能运行，
有大佬知道为什么吗？
-我发现问题就是EOF，
只要把它改成10就行了，
好像意思是换行？这是为什么？
*/

/*
-This is a program that was corrected out by myself, 
but it's nothing like what's written in the textbook.
Because if the program was written exactly as written in the book, 
it would not work at all, 
and does anyone know the reason?
-I find that it is the "EOF" that has something wrong, 
and it works when I changed it into "10", 
but why? I can't understand.
*/

/*原程序：/original program:
int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n",nc);
}
*/