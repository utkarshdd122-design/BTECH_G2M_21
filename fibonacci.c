#include<stdio.h>
int main(){
    int n,a=1,b=1,sum=0;//take sum=1 if we want to print first and second term i.e.,a&b
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n-2;i=i+1){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("the fibonacci of %d is %d",n,sum);
    return 0;
}