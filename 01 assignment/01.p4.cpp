#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 0;
    int m = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                s = s + j;
                m++;
            }
        }
    }
    cout << m << " " << s;

    return 0;
}