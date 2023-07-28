#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int r;
    srand(time(NULL));
    r = (rand() % 15) + 1;
    int goal1 = 0;
    int goal2 = 0;
    int red1 = 0;
    int red2 = 0;
    for (int i = 0; i < r; i++)
    {
        int a;
        a = (rand() % 6) + 1;
        if (a == 1)
        {
            cout << "goal for fist team" << endl;
            goal1++;
        }
        else if (a == 2)
        {
            cout << "goal for second team" << endl;
            goal2++;
        }
        else if (a == 3)
        {
            cout << "red card for first team" << endl;
            red1++;
        }
        else if (a == 4)
        {
            cout << "red card for second team" << endl;
            red2++;
        }
        else if (a == 5)
        {
            cout << "penalty for first team" << endl;
            int x;
            x = (rand() % 2) + 1;
            if (x == 1)
            {
                cout << "first team scored a goal by penalty" << endl;
                goal1++;
            }
            else
            {
                cout << "first team missed the penalty" << endl;
            }
        }
        else if (a == 6)
        {
            cout << "penalty for second team" << endl;
            int y;
            y = (rand() % 2) + 1;
            if (y == 1)
            {
                cout << "second team scored a goal by penalty" << endl;
                goal2++;
            }
            else
            {
                cout << "second team missed the penalty" << endl;
            }
        }
    }
    cout << "first team " << goal1 << " second team " << goal2 << endl;
    cout << "number of players in first team : " << 11 - red1 << endl;
    cout << "number of players in second team : " << 11 - red2 << endl;

    return 0;
}