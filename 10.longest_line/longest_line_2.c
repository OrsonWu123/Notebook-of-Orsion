#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getlines(void);
void copy(void);

int main()
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getchar()) > 0)
        if (len > max){
            max = len;
            copy();
        }
    if (max > 0)
        printf("%d",longest);
    return 0;
}

int getlines(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE 
        && (getchar()) != EOF && c != '\n'; ++i)
            line[i] = c;
    if (c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}