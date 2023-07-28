#include<iostream>
using namespace std;

int main(){


int a, b ,c;
cin >> a;
c = a;
while (a != 0)
{
    b = (b * 10) + (a % 10);
    a = a / 10;  
}
if (c == b)
{
    cout << "YES";
}
else{
    cout << "NO";
}








    return 0;
}