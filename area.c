#include<stdio.h>
int main()
{
 float l,b,area,perimeter;
    printf("enter l:");
    scanf("%f",&l);
printf("enter b:");
scanf("%f",&b);
area=l*b;
perimeter=(l+b)*2;
printf("area is :%f",area);
printf("\nthe perimeter is:%f",perimeter);
if(area>perimeter)
printf("\nthe area is greater than perimeter");
else
printf("\nthe perimeter is greater than area");
return 0;
}