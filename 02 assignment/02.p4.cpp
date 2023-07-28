#include <iostream>
#include <cmath>
using namespace std;

int f(int a, int b)
{
    int bmm;
    for (int i = 1; i <= b; i++)
    {
        if (a % i == 0 and b % i == 0)
        {
            bmm = i;
        }
    }
    int kmm;
    kmm = (a * b) / bmm;

    int q;
    q = kmm / bmm;

    int i = 0;
    int d = 0;
    while (d < q)
    {
        i++;
        d = i * i;
    }
    int f;
    f = sqrt(d);
    f = f - 1;
    f = f * f;
    if (q - f < d - q)
    {
        cout << f << " ";
        return f;
    }
    else
    {
        cout << d << " ";
        return d;
    }
}

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    f(a[0], a[1]);
    f(a[0], a[2]);
    f(a[1], a[2]);
}