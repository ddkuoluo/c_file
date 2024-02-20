#include <stdio.h>
#include <stdlib.h>
int main(){
    system("chcp 65001");
    //2到100之间所有质数
    //判断x是否为质数
    //jiang 2到x-1之间所有数字整除x，如果都不能整除x，说明x是质数
    int x;
    int j;
    for (x=2;x<=100;x++){           //while（x<=100）

        for (j=2;j<x;j++){          //遍历2~x-1之间所有数字
            if (x%j==0)
                break;
            }
        if (j==x){
            printf("%d是质数\n",x);
        }
    }
}