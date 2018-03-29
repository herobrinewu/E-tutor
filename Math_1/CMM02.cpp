/*
	CMM02-易
	計算三角形面積
*/

#include <iostream>  
#include <iomanip>  

using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;
	if (a >= 0 && b >= 0)
	{
		cout << fixed << setprecision(1) << a*b / 2 << endl;
	}
	return 0;
}
