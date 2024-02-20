#include <stdio.h>
#include <stdlib.h>
int main(){
    system("chcp 65001");
    int byear,bmon,bday;  //出生年月日
    int cyear,cmon,cday;  //今天年月日
    //获取出生日期和现在日期
    printf("输入出生年月日:\n");
    scanf("%d,%d,%d",&byear,&bmon,&bday);
    printf("输入今天年月日:\n");
    scanf("%d,%d,%d",&cyear,&cmon,&cday);
    //计算x+1~x1之间的天数
    int i;
    int sum=0;
    for (i=byear+1; i < cyear; i++) {
        //判断闰年
        if ((i%400==0)||(i%4==0 && i%100!=0)){
            sum+=366;
        } else{
            sum+=365;
        }
    }
    printf("1:%d\n",sum);
    //计算y，z这天到x，12月31的天数
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for (i = bmon+1; i <= 12; i++) {
        sum+=days[i];}
        if(bmon<3){
        if ((byear%400==0)||(byear%4==0 && byear%100!=0)){
            sum+=1;
        }
    }
    sum+=days[bmon]-bday+1;
    printf("2:%d\n",sum);
    //计算x1，1月1到y1-1 28/29/30/31的天数
    for (i = 1; i < cmon-1; i++) {
        sum+=days[i];}
        if(cmon<3){
        if ((cyear%400==0)||(cyear%4==0 && cyear%100!=0)){
            sum+=1;
        }}
    sum+=cday;
    printf("你活了%d天",sum);
    return 0;
}