#include<stdio.h>
int main(){
    int ram, shyam, ajay;
    printf("Enter ram's age: ");
    scanf("%d", &ram);
    printf("Enter shyam's age: ");
    scanf("%d", &shyam);
    printf("Enter ajay's age: ");
    scanf("%d", &ajay);
    if(ram < shyam && ram < ajay){
        printf("Ram is the youngest.");
    }
    else if(shyam < ajay){
        printf("Shyam is the youngest.");
    }
    else{
        printf("Ajay is the youngest.");
    }
    return 0;
}