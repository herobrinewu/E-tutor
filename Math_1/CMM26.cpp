/*
  2018 3 30:11:12 <create>
  CMM26 easy
  輸出1*1 2*2 …N*N之結果
*/


#include <iostream>  
  
using namespace std;  
int main() {  
  
    int a,b;  
    cin >> a;  
    b = 1;  
    while (b<=a)  
    {  
        cout << b << "*" << b << "=" << b*b << endl;  
        b += 1;  
    }  
    return 0;  
}
