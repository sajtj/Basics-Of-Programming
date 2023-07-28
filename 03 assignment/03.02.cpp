#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n , m , Sx , Sy , d;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> Sx >> Sy >> d;
        if (n <= Sx + d and m <= Sy + d)
        {
            cout << -1 << endl;
        }
        else if (1 >= Sx - d and 1 >= Sy - d)
        {
            cout << -1 << endl;
        }
        else if (1 >= Sx - d and n <= Sx + d)
        {
            cout << -1 << endl;
        }
        else if (1 >= Sy - d and m <= Sy + d)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << m + n - 2 << endl;
        }
        
    }
    return 0;
}