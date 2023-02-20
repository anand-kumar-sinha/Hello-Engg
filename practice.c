#include <stdio.h>
int main()
{
    int num, k = 0, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &num);
    for (int i = 0; num != 0; i++)
    {
        k = num % 10;
        num = num / 10;
        sum = sum + k;
    }
    printf("%d", sum);

    return 0;
}