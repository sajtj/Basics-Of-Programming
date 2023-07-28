#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int q;
    cin >> q;
    int a[q];
    int l;
    cin >> l;
    int b[l];
    int k;
    cin >> k;
    int m;
    cin >> m;
    for (int i = 0; i < q; i++)
    {
        cin >> a[i];
    }
    sort(a, a + q);
    for (int i = 0; i < l; i++)
    {
        cin >> b[i];
    }
    sort(b, b + l);

    int min_a[k] = {};
    for (int i = 0; i < k; i++)
    {
        min_a[i] = a[i];
    }

    int max_b[m] = {};
    int index = 0;
    for (int i = l - 1; i >= (l - 1) - m; i--)
    {
        max_b[index] = b[i];
        index++;
    }

    for (int i = k - 1; i <= k - 1; i++)
    {
        for (int j = m - 1; j <= m - 1; j++)
        {
            if (max_b[j] > min_a[i])
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
    }

    return 0;
}