#include <iostream>

using namespace std;
bool cmp(int num);
int main() {
	int a;
	cin >> a;
	for (int i = a-1; i >= 1; i--)
	{
		bool b=cmp(i);
		if (b == true) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}

bool cmp(int num)
{
	bool cmp2 = true;
	for (int i = 2; i < num; i++)
	{
		if (num%i == 0) {
			cmp2= false;		//除了一根本身以外有一個數可整除就不是質數
			break;
		}
		else cmp2= true;
	}
	if (cmp2 == true) return true;
	else return false;
}
