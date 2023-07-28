#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string f(string a)
{
    string b = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != '0' - 0)
        {
            b = b + a[i];
        }
    }
    return b;
}

int main()
{
    string x;
    cin >> x;
    int a = stoi(x);
    string y;
    cin >> y;
    int b = stoi(y);

    int sum1 = a + b;
    string s1 = to_string(sum1);
    string h = f(s1);
    int e = stoi(h);

    string n = f(x);
    int k;
    k = stoi(n);
    string m = f(y);
    int z;
    z = stoi(m);
    int sum2 = k + z;
    if (sum2 == e)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}