#include<iostream>
using namespace std;

int main(){

int a;
cin >> a;
int n;
int max;

for (int i = 1; i <= a; i++)
{
    cin >> n;
    if (n > max)
    {
        max = n;
    }
    
}
cout << max;




    return 0;
}