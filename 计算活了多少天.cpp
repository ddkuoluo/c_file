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
    int i;
    int sum=0;
    for (i=byear+1; i < cyear; i++) {
        //判断闰年
        if ((i%4==0 && i%100!=0)||(i%400==0)){
            sum+=366;
        } else{
            sum+=365;
        }
    }
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for (i = bmon+1; i <= 12; i++) {
        sum+=days[i];
    }
        if(bmon<3){
        if ((byear%4==0 && byear%100!=0)||(byear%400==0)){
            sum+=1;
        }
    }
    sum+=days[bmon]-bday+1;
    for (i = 1; i < cmon; i++) {
        sum+=days[i];}
        if(cmon<2){
        if ((cyear%4==0 && cyear%100!=0)||(cyear%400==0)){
            sum+=1;
        }}
    sum+=cday;
    printf("你活了%d天",sum);
    return 0;
}