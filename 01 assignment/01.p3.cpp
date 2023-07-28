#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int m = 0;
    int max = 0;
    while (n != -1)
    {
        cin >> n;
        m = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                m = m + 1;
            }
        }
        if (m > max)
        {
            max = m;
        }
    }
    
    for (int i = 1; i <= max; i++)
    {
        for (int j = 1; j <= max; j++)
        {
            if (i == 1 or i == max or j == 1 or j == max)
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