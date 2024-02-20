#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    system("chcp 65001");
    int randomNumber;
    // 生成随机数种子
    srand(time(0));
    //生成随机数，且随机数为1到1000
    randomNumber = rand() %1001;
//输入猜测次数限制，设置难度
    int c;
    printf("请输入猜测次数限制(需要大于5):");
    scanf("%d",&c);
    //输入的次数
    int count=0;
    //while(c<=7){
    //   printf("难度需要大于7");
    //    break;
    //}
    if(c>5) {
        printf("请输入1到1000的整数:\n");
        while (1) {
            int x;
            scanf("%d", &x);
            if (count > c) {
                printf("game over");
                break;
            } else if (x != randomNumber) {
                if (x > randomNumber) {
                    printf("太大了\n");
                } else if (x < randomNumber) {
                    printf("太小了\n");
                }
                count++;
            } else if (x == randomNumber) {
                //判断几次猜对，输出回显
                if (count <= 2 && count > 0) {
                    printf("猜对了，太棒了！");
                    break;
                } else if (count > 3 && count <= 4) {
                    printf("猜对了，运气王！");
                    break;
                } else if (count > 4 && count <= 5) {
                    printf("不错哦");
                    break;
                } else if (count > 5 && count <= c) {
                    printf("好险啊！");
                    break;
                }
            }
        }
    } else{
        return 0;
    }
}