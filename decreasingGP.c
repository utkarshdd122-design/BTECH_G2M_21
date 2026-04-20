#include<stdio.h>
int main(){
    float a=100;
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        printf("%.2f\t",a);
        a/=2; // Assuming a geometric progression with common ratio 1/2
    }
    return 0;


}