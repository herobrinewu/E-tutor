/*
  2018 3 30:00:33 create
	CMM06-易
	英哩轉公里
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a;
	double b;
	cin >> a;
	b = a*1.6;
	cout << fixed << setprecision(1) << b << endl;
}
/*
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double a;
cin >> a;
cout << fixed << setprecision(1) << a*1.6 << endl;

return 0;
}
*/
