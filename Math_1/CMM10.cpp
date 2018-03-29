/*
	2018 3 30:00:55 <create>
	CMM10 簡單
	攝氏轉華式
*/


#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	double C,F;
	cin >> C;
	F=1.8*C+32;
	cout <<fixed<<setprecision(1) << F << endl;
	return 0;
}
