#include<stdio.h>
int main(){
    int cp,sp,profit;
    printf("enter cp:");
    scanf("%d",&cp);
    printf("enter sp:");
    scanf("%d",&sp);
    if(sp>cp){
        profit=sp-cp;
        printf("the profit is :%d",profit);
    }
    else{
    int loss;
    loss =cp-sp;
    printf("there is no profit\nthe loss is:%d",loss);}
    return 0;
    }