#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }

    int c[n][n] = {};
    int x[n][n] = {};
    int y = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            y = 0;
            for (int t = 0; t < n; t++)
            {
                y = y + a[i][t] * b[t][j];
            }
            x[i][j] = y;
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}