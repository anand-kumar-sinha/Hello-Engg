#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l = (2 * n) - 1;
    int k = n - 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < l; j++)
        {
            if (i <= j && j <= i + k)
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