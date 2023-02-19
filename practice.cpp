#include <iostream>
using namespace std;
int main()
{
    int num, a = 0, b = 1, sum;
    cout << "Enter the number" << endl;
    cin >> num;
    if (num == 1)
    {
        cout << "This is not prime number" << endl;
    }
    else if (num == 2)
    {
        cout << "This number is prime number" << endl;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "This is not prime number" << endl;
            break;
        }
        else
        {
            cout << "This is prime number" << endl;
            break;
        }
    }

    return 0;
}