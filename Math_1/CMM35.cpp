/*
  2018 3 30:11:34 <create>
  CMM35 easy
  平、閏年判定
*/


#include <iostream>  
  
using namespace std;  
int main() {  
    int year;  
    cin >> year;  
    if (year % 4 == 0) {  
        if ((year / 100) % 4 == 0) {  
            cout << "Bissextile Year" << endl;  
        }  
    }  
    else cout << "Common Year" << endl;  
    return 0;  
}
