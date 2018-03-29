/*
  2018 3 30:01:10 <create>
  CMM12 easy
  相遇時間計算
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int Va = 1;
	float Vb = 0.762;
	int S;
	cin >> S;
	double V = Va - Vb;				//演算法筆記https://www.junyiacademy.org/junyi-math/middle-school-algebra/junyi-rate/v/w4DDb7btNq8
	//Vb在前 每一個小時va可以追V公里 相對距離S 過一個小時可追V公里那幾個小時可以追s公里？得解！
	double T = S / V;
	cout << ceil(T) << endl;		//無條件捨去包含在math.h內
	return 0;
}
