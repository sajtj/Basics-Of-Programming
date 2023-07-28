#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int n[a];
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
    }

    int d = 0;
    int f = 0;
    int s = 0;
    int g = 0;

    for (int j = 0; j < a; j++)
    {
        s = g;
        for (int k = 0; k <= a;)
        {
            d = f;
            d = 180 - n[j];
            s = s + d;
            if (s == 360)
            {
                cout << "YES" << endl;
                break;
            }

            if (s > 360)
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
}