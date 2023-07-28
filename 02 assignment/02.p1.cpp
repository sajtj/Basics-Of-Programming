#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string f(int a)
{
    int c;
    int b;
    string d;
    while (a != 0)
    {
        c = a % 2;
        d = d + to_string(c);
        a = a / 2;
    }
    reverse(d.begin(), d.end());
    cout << d;
    return d;
}
int main()
{
    int a;
    cin >> a;
    f(a);
}