#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int index;
    int index1[n] = {};
    for (int i = 1; i < n + 1; i++)
    {
        index = 0;
        for (int j = 0; j < i; j++)
        {
            index++;
            cout << index << " ";
        }
        for (int k = 0; k < i; k++)
        {
            index--;
            if (index == 0)
            {
                break;
            }
            else
            {
                cout << index << " ";
            }
        }

        cout << endl;
    }

    return 0;
}