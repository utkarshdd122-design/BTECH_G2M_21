#include<stdio.h>
int main(){
   int i,n;
   printf("enter size of array:");
   scanf("%d",&n);
   int arr[n];

    //input array
    printf("enter elements of array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    //reverse array
    for(i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    //print reversed array
    printf("reversed array:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}