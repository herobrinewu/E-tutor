/*
  2018 3 30:11:20 <create>
  CMM31 easy
  計算1~N能被2和三整除但不被12整除之數值和
*/


#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int a,b,c=0;  
    cin >>a;  
    b=2;  
    while(b<=a)  
    {  
        if((b%2==0 && b%3==0) && b%12!=0)  
        {  
            c=c+b;  
              
        }  
        b++;  
    }  
    cout <<c << endl;  
}
