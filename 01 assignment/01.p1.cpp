#include<iostream>
#include<string>
using namespace std;

int main(){
int n;
cin >> n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin >> a[i];
    
}

int c = 0;
for (int j = 1; j < n ; j++)
{

    if (a[j] != a[j-1])
    {
      c = c + 1;
    }

}  
cout << c;    











    return 0;
}