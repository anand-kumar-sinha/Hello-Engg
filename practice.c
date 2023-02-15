
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num == 1)
    {
        printf("This is not prime number\n");
    }
    else if (num ==2)
    {
        printf("This is prime number\n");
    }
    
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("This is not prime number\n");
                break;
            }
            else
            {
                printf("This is prime number\n");
                break;
            }
        }
    }

    return 0;
}
