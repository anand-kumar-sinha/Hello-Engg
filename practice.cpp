#include <iostream>
using namespace std;
int main()
{
    int num, k;
    cout << "Enter the number" << endl;
    cin >> num;
    for (int i = 0; num != 0; i++)
    {
        k = num % 10;
        num = num / 10;
        cout << k;
    }

    return 0;
}