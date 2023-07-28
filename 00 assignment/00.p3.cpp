#include <iostream>

using namespace std;

int main()
{

    long int n , m , sum = 0;
    cin >> n >> m;
   
    
    for (int i = -10; i <= m; i++) 
    {
       for (int j = 1; j <= n; j++) 
       {
           int x = i + j;
           sum = sum + (x * x * x) / (j * j);
       }
    }
    
    cout << sum;

    

    return 0;
}