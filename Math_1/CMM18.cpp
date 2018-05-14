#include <iostream>

using namespace std;
void BIN(int a, int b[8]);
int main() {
	int number;
	cin >> number;
	int binnumber[8];
	BIN(number, binnumber);
	for (int i = 0; i < 8; i++)
	{
		cout << binnumber[i];
	}
	cout << endl;
	return 0;
}
void BIN(int a, int b[8]) {
	if (a >= 0) {
		int i = 7;
		do
		{
			b[i] = a % 2;
			a = a / 2;
			i--;
		} while (i>=0);
	}
	else {
		a = a * -1;
		int i = 7;
		do
		{
			b[i] = a % 2;
			a = a / 2;
			i--;
		} while (i >= 0);
		for (int i = 7; i >= 0; i--)
		{
			if (b[i] == 1) {
				for (int j = i-1; j >=0 ; j--)
				{
					if (b[j] == 1)
						b[j] = 0;
					else if (b[j] == 0)
						b[j] = 1;
				}
				break;
			}
		}
	}
}
