#include <iostream>
using namespace std;

int f(int x, int y)
{
    int b = 0;
    for (int i = x; i <= y; i++)
    {
        if (i % 2 != 0)
        {
            b = b + 1;
        }
    }
    cout << b;
    return b;
}
int main()
{
    int x, y;
    cin >> x >> y;
    f(x, y);
}