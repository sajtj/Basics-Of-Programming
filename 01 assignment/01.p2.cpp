#include <iostream>
#include <string>
using namespace std;

int main()
{

    string n;
    cin >> n;
    int a;
    a = stoi(n);
    int b;
    b = stoi(n);
    int s;
    string h;
    string d;
    for (int i = 0; i < n.size(); i++)
    {
        s = a % 10;
        h = to_string(s);
        d = d + h;
        a = a / 10;
    }
    int f = 0;
    f = stoi(d);
    cout << f << endl;
    bool m = true;
    for (int i = 2; i < b; i++)
    {
        if (b % i == 0)
        {
            m = false;
        }
    }
    bool w = true;
    for (int j = 2; j < f; j++)
    {
        if (f % j == 0)
        {
            w = false;
        }
    }

    if (m == false or w == false)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}