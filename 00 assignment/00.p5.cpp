#include <iostream>
#include<string>
using namespace std;


int main() {

string a;
cin >> a;

for (double j = 0; j < a.size(); j++)
{
    cout << a[j]<< ": ";

    for (double i = 0; i < a[j] - '0' ; i++)
    {
    cout << a[j];
    }
cout << endl;
}


return 0;


}
