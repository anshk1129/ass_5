#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter how many times you want to print\n");
    scanf("%d", &n);
    printf("Printing\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n",2*i);
    }
    return 0;
}