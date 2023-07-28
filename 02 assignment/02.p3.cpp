#include <iostream>
using namespace std;

int f(int x)
{
    int sum;
    if (x == 2)
    {
        return 2;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return x;
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + f(i);
        }
    }
    cout << sum;

    return 0;
}