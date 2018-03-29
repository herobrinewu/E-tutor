/*
  2018 3 30:00:57 <create>
  CMM16 EASY
  判斷座標是否再圓形範圍內
*/


#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double x, y;
	cin >> x >> y;
	double d = x*x + y*y;
	if (pow(d, 0.5) <= 100)
	{
		cout << "inside" << endl;
	}
	else {
		cout << "outside" << endl;
	}
	return 0;
}
