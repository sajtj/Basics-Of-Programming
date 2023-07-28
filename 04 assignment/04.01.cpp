#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    string b = " ";

    if (a[0] >= 97 and a[0] <= 122)
    {
        b[0] = a[0] - 32;
        cout << b;
    }
    else
    {
        b[0] = a[0];
        cout << b;
    }
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] >= 65 and a[i] <= 90)
        {
            b[i] = a[i] + 32;
            cout << b[i];
        }
        else
        {
            b[i] = a[i];
            cout << b[i];
        }
    }

    return 0;
}