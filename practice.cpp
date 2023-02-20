#include <iostream>
using namespace std;
int main()
{
    int num, b = 0, sum = 0;
    cout << "Enter the number" << endl;
    cin >> num;
    for (int i = 0; num != 0; i++)
    {
        b = num % 10;
        num = num / 10;
        sum = sum + b;
    }
    cout << sum << endl;

    return 0;
}