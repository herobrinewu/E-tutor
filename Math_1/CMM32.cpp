/*
  2018 3 30:11:23 <create>
  CMM32 easy
  阿姆斯壯數
*/

#include <iostream>  
  
using namespace std;  
  
int main() {  
    int a,b[3],i=0,c,sum,x=0,A;  
    cin >> a;  
    A = a;  
    for (i = 0; i < 3; i++)  
    {  
        c = a % 10;  
        a = a / 10;  
        b[i]=c;  
        sum = c*c*c;  
        x = x + sum;  
    }  
    if (x == A) {  
    cout << "Yes" << endl;  
    }  
    else  
    {  
    cout << "No" << endl;  
    }  
}
