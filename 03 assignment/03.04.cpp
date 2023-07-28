#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    bool index = false;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int d[n] = {};
        int a[n] = {};
        int a1[n] = {};
        for (int j = 0; j < n; j++)
        {
            cin >> d[j];
        }

        a[0] = d[0];
        a1[0] = d[0];
        index = false;
        for (int x = 1; x < n; x++)
        {
            a[x] = d[x] + a[x - 1];
            a1[x] = -d[x] + a[x - 1];
            if (a[x] != a1[x] and a1[x] >= 0)
            {
                cout << -1 << endl;
                index = true;
                break;
            }
        }
        if (index == true)
        {
            continue;
        }
        a[0] = d[0];
        a1[0] = d[0];
        cout << a[0] << " ";
        for (int k = 1; k < n; k++)
        {
            a[k] = d[k] + a[k - 1];
            cout << a[k] << " ";
        }
        cout << endl;
    }

    return 0;
}