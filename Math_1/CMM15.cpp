/*
  2018 3 30:10:58 <create>
  CMM15 easy
  判斷是否在正方形範圍內
*/

#include <iostream>  
  
using namespace std;  
int main()  
{  
    int a,b;  
    cin >>a>>b;  
    if((a>=0 && a<=100) && (b<=100 && b>=0))  
    {  
        cout <<"inside"<<endl;  
    }   else    {  
        cout <<"outside"<<endl;  
    }  
}
