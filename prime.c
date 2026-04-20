#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++)
    if(n%i!=0){
    printf("The number is prime");
    break;}
    else
    {
        printf("The number is not prime");
        break;
    }
    return 0;
}