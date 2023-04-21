#include<stdio.h>

int main(void){
     float inch=0;
     float centimetre=0;

     printf("请输入英寸数以换算：\n");
     scanf("%f",&inch);
     centimetre=inch/2.54;
     printf("%f英寸是%f厘米。\n",inch,centimetre);

     return 0;
}