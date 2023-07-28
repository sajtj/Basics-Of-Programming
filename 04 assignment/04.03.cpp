#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        string b;
        cin >> b;
        sort(b.begin(), b.end());
        sum = 2;
        for (int i = 1; i < a; i++)
        {
            if (b[i] == b[i - 1])
            {
                sum = sum + 1;
            }
            else
            {
                sum = sum + 2;
            }
        }
        cout << sum << endl;
    }
}