/*
  2018 3 30:11:16 <create>
  CMM27 easy
  計算兩整數間所有數值和
*/

#include <iostream>  
using namespace std;  
  
int main()  
{  
    int a,b,sum=0;  
    cin >> a >> b;  
    if(a>b)  
    {  
        for(sum=0;a>=b;a--)  
        {  
            sum=sum+a;  
        }  
        cout  <<sum << endl;   
        }  
    if(a<b)  
    {  
        for(sum=0;a<=b;a++)  
        {  
            sum=sum+a;  
        }  
        cout << sum << endl;  
    }  
    if(a==b)  
    {  
        cout << a << endl;  
    }  
}
