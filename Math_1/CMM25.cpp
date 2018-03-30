/*
 2018 3 30:11:08 <create>
 CMM25 easy
 計算正整數被三整除之數值和
*/


#include <iostream>  
  
using namespace std;  
int main() {  
  
    int a, b;  
    cin >> a;  
    if (a >= 3)  
    {  
        b = a / 3;  
        b = (3 + 3 * b)*b / 2;  
    }  
    cout << b << endl;  
    return 0;  
}
