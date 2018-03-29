/*
  2018 3 30:01:05
  CMM28 easy
  計算1~N之間屬於5和7的倍數
*/

#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	if (a >= 0)
	{
		for (int i = 1; i <= a; i++)
		{
			if (i % 35 == 0 && i==35) cout << i;
			if (i % 35 == 0 && i>35) cout << " " << i;
		}
		cout << endl;
	}
	return 0;
}
