#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("This is not prime number\n");
    }
    else if (num == 2)
    {
        printf("This is prime number\n");
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("This is not prime number\n");
            break;
        }
        else
        {
            printf("This is prime nubmer\n");
            break;
        }
    }

    return 0;
}