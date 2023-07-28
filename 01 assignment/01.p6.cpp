#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int n[a];
    int s = 0;
    int c = 0;
    int f = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (n[i] % 3 == 0)
        {
            s = n[i] / 3;
            cout << s << " " << s << endl;
        }
        else if (n[i] % 3 == 1)
        {
            s = n[i] / 3;
            c = s + 1;
            cout << c << " " << s << endl;
        }
        else
        {
            s = n[i] / 3;
            c = s + 1;
            cout << s << " " << c << endl;
        }
    }

    return 0;
}