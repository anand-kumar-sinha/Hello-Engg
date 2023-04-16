#include <stdio.h>
int main()
{
    int num,k = 0;
    printf("Enter the number\n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("This is not prime number\n");
    }
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            k++;   
        }
        if(k >= 3)
        {
            break;
        }
    }
    if (k > 2)
    {
        printf("This is not prime number\n");
    }
    else{
        printf("This is prime number\n");
    }
    

    return 0;
}