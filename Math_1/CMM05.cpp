/*
  2018 3 30:00:32 create
  CMM05 簡單
  計算正方形面積
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	double a;
	cin >> a;
	if (a >= 0) {
		cout << fixed << setprecision(1)<< a*a << endl;
	}
	return 0;
}
