#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    printf("enter third number:");
    scanf("%d", &c);
    printf("enter fourth number:");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
        printf("%d is greatest", a);
    else if (b > a && b > c && b > d)
        printf("%d is greatest", b);
    else if (c > a && c > b && c > d)
        printf("%d is greatest", c);
    else
        printf("%d is greatest", d);
    return 0;
}