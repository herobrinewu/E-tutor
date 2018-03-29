/*
	2018 3 30:01:01 <create>
	CMM20 easy
	
*/



//#include <iostream>
//
//using namespace std;
//int main() {
//	int number;
//	cin >> number;
//	cout << hex << uppercase << number << endl;
//	return 0;
//}

#include <iostream>
using namespace std;
char che(int a);
int main() {
	char number2[16] = {};
	int number;
	cin >> number;
	for (int i = 15; i >= 0; i--)
	{
		number2[i]=che(number % 16);
		number /= 16;
	}
	for (int i = 0; i < 16; i++)
	{
		if (number2[i] != '0') {
			int j = i;
			while (j < 16) {
				cout << number2[j];
				j++;
			}
			break;
		}
	}
	cout << endl;
}
char che(int a) {
	if (a >= 10) 
		return a + 55;
	else return a+48;
}
