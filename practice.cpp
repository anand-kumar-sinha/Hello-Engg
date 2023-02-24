#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i == 1 && j <= n)
            {
                cout << "*";
            }
            else if (i == n && j >= n && j <= k)
            {
                cout << "*";
            }
            else if (j == i || j == n - 1 + i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}