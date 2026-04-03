#include<stdio.h>
int main(){
    float x1,x2,x3,x4,obtained,total,percentage;
    x1=38;
    x2=40;
    x3=35;
    x4=33;
    obtained=x1+x2+x3+x4;
    total=160;
    percentage=(obtained/total)*100;
    printf("percentage is:%f",percentage);
    return 0;

}