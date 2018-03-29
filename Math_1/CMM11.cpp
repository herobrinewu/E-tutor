/*
  2018 03 30:01:17 <create>
  CMM11 easy
  購票計算
*/

#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    int a,b;  
    cin >> a;  
    b=a/10;  
    cout <<"NT10=" << b << endl;  
    a=a-b*10;  
    b=a/5;  
    cout <<"NT5=" << b << endl;  
    a=a-b*5;  
    b=a/1;  
    cout <<"NT1=" << b << endl;
	return 0;
}  
