#include <stdio.h>
int main()
{
    int n; // itni baar loop chalega OR (till n the no.are printed))
    printf("enter a number:");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i = i + 2)
    {
        printf("%d\n", i);
    }
    return 0;
}