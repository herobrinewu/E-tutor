/*
	CMM01-��-�ƾ���-C++
	�p���έ��n
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double a,b,c;
		cin >> a >> b >> c;
		cout << "Trapezoid area:";
		cout<<fixed << setprecision(1)<< (a + b)*c / 2 << endl;
	return 0;
}