/*
  2018 3 30:00:37 <create>
  CMM09 簡單
  計算i次方的值
*/

#include <iostream>
using namespace std;

int main() {
	int a;
	int ans = 1;
	cin >> a;
	if (a < 31) {
		int x = pow(2, a);
		cout << x << endl;
	}
	else cout << "Value of more than 31\n";
	return 0;
}
