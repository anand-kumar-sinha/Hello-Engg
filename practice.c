
#include <stdio.h>
int main()
{
    int num, power, j = 1;
    scanf("%d %d", &num, &power);
    for (int i = 1; i <= power; i++)
    {
        j = j * num;
    }
    printf("%d", j);
    return 0;
}
