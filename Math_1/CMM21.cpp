/*
  2018 3 30:11:01 <create>
  CMM21 easy
  算階乘
*/


#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    long long int a,b;  
    cin >> a;  
    b=a;  
  
    while(b>1)  
    {  
        b-=1;         
        a=a*b;  
    }  
    cout << a << endl;  
}
