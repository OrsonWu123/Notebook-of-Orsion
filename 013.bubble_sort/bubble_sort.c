#include <stdio.h>

void bubble_sort(int a[128], int len);

int main()
{
    int a[128] = {0}, num, i = 0;

    printf("请输入要排序的数字：");

    while(1){
        scanf("%d",&num);
        char c=getchar();
        a[i++]=num;
        if(c=='\n'){
            break;
        }
    }

    bubble_sort(a, i);
    
    for(int j = 0; j < i; j++){
        printf("%d ",a[j]);
    }
    printf("\n");

    return 0;
}

void bubble_sort(int a[128], int len)
{
    int i, j;

    for (i=0; i<len-1; i++){
        for (j = 0; j<len-1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
