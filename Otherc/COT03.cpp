#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

bool comp(int a, int n);
int main() {
	int number;
	cin >> number;
	int freq = pow(10.0,number-1);
	for (int i = 1; i <= freq; i++)
	{
		bool v = comp(i, number-1);
		if (v == true)
			cout << i << endl;
	}
	system("pause");
	return 0;
}
bool comp(int a, int n) {
	while (true)
	{
		int c = pow(10.0, n);
		if (c>a) n--;
		else break;
	}
	int sum = 0;
	int sum2 = 1;
	while (true) {
		int s = pow(10.0, n);
		int aa = a / s;
		if (n >= 0) {
			sum = sum + aa;
			sum2 = sum2 * aa;
			a = a % s;
			n--;
			if (n < 0)
				break;
		}
	}
	if (sum==sum2)
		return true;
	else return false;
}
