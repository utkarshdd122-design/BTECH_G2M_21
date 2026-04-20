#include<stdio.h>
int main(){
    int n ;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<0){
        n=-n;
        printf("the absolute value is : %d",n);
    }
    else
        printf("the absolute value is : %d",n);
        return 0;
}