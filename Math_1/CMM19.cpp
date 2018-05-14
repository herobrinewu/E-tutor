#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	int number;
	double price;
	cin >> number;
	if (number <= 800)
		price = number * 0.9;
	else if (number > 800 && number < 1500)
		price = number * 0.9*0.9;
	else if (number >= 1500)
		price = number * 0.9*0.79;
	cout << fixed << setprecision(1) << price << endl;
	return 0;
}
