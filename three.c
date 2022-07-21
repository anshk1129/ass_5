#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter how many times you want to print\n");
    scanf("%d", &n);
    printf("Printing\n");
    for (i = n; i >= 1; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}