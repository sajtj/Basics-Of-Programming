#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){

int n;
int a;
cin >> a;
for (int i = 1; i < a; i++)
{
    if(a % i == 0)
    {
        n = n + i;
    }       
}
    if (n == a)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }



    return 0;
}