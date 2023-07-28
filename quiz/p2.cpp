#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int c = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] == b[j])
        {
            c++;
        }
    }
    if (c >= n / 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
