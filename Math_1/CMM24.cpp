/*
  2018 3 30:11:05 <create>
  CMM24 easy
  計算薪水
*/


#include <iostream>  
#include <iomanip>  
  
using namespace std;  
  
int main()  
{  
    double a,b,sum;  
    cin >> a >> b;  
    if(a<60)  
    {  
        sum=a*b;  
          
    }  
    if(a>60 && a<=120)  
        {  
        sum=(a-60)*b*1.33;  
        }  
    if(a>120)  
        {  
        sum=60*b+60*b*1.33+(a-120)*b*1.66;  
        }  
        cout << fixed << setprecision(1) <<sum << endl;  
 }
