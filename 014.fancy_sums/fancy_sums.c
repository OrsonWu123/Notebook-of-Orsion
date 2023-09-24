#include <stdio.h>

int main()
{
    int a[128][128] = {0}, num;
    int row = 0, tier = 0, sum1 = 0, sum2 = 0;
    char c;

    printf("用换行和空格，请输入行、列小于128的二维数组（用^D以结束）\n");

    for(int i = 0; i < 128; i++){
        for(int j = 0; j < 128; j++){
            scanf("%d",&num);
            c = getchar();
            a[i][j] = num;
            if(c == '\n' || c == EOF){
                if (row < j)row = j+1;
                break;
            }
        }
        if(c == EOF){
            tier = i;
            break;
        }
    }

    printf("数列如下，其每一行的和在该行最右侧，其每列的和在每行最下方：\n");

    printf("\n");
    for (int i = 0; i < tier; i++){
        for (int j = 0; j < row; j++){
            printf("%d\t",a[i][j]);
            sum1 += a[i][j];
        }
        printf("  %d",sum1);
        sum1 = 0;
        printf("\n");
    }

    printf("\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < tier; j++){
            sum2 += a[j][i];
        }
        printf("%d\t", sum2);
        sum2 = 0;
    }
    printf("\n");
    
    return 0;
}