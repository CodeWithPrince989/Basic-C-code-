#include <iostream>
using namespace std;

int main()
{
    // 101 pattern
    / 0 - 1 Triangle Pattern bool val = true;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << val << " ";
            val = !val;
        }
        cout << "\n";
    }

    / Rhombus Pattern int n = 5;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    / Palindromic Pattern with Numbers int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // nums backward
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        // nums forward
        for (int j = 2; j <= i; j++)
        {
            cout << j;
        }
    }

    return 0;
}