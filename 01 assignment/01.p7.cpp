#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int b;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        b = n % 10;
        if (b != 0)
        {
            n = n - 1;
        }
        if (b == 0)
        {
            n = n / 10; 
        }
    }
    cout << n;
    return 0;
}