#include <stdio.h>
#include <string.h>

int main()
{
    char a[128];
    gets(a);

    int count = 0, place = 0, max = 0,i,j;

    for (i=0; i < strlen(a); i++){
        if (a[i] == ' '){
            if (count > max){
                max = count;
                place = j;
            }
        count = 0;
        j = i+1;
        }
        else{
            count++;
        } 
    }

    printf("最长的词为："); 
    for(i=place;i<place+max;i++){
        printf("%c",a[i]);
    } 
    printf("长度是：%d\n",max);
    return 0;
}
