/*
	CMM01-易-數學類-C++
	計算梯形面積
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
