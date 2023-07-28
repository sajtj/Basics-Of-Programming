#include <iostream>
using namespace std;

int f(int x)
{
    if (x == 1 or x == 2)
    {
        return 1;
    }
    return f(x - 1) + f(x - 2);
}
int main()
{
    int x;
    cin >> x;
    int n;
    n = f(x);
    cout << n % 5;
}