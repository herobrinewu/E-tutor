#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
bool cmp(int a);
void cmp2(vector<long long> a,vector <int> *b);
void out(vector <long long > a, vector <int> b);
int main() {
	vector <long long> Vecnum;
	long long number;
	cin >> number;
	long long number2 = number;
	for (long long i = 2; i < number2; i++)
	{
		long long a = i;
		if (number%i == 0 && cmp(i) == true) {
			Vecnum.push_back(i);
			number = number / i;
			if (number == 1)
				break;
			i = a-1;
		}
	}
	
	vector <int> freq;
	cmp2(Vecnum, &freq);
	freq.push_back(0);
	Vecnum.push_back(0);
	out(Vecnum, freq);
	cout << endl;
	system("pause");
	return 0;
}
bool cmp(int a) {
	for (int i = 2; i < a; i++)
	{
		if (a%i == 0) {
			return false;
		}
	}
	return true;
}
void cmp2(vector<long long> a,vector <int> *b) {
	int sum = 1;
	for (int i = 0; i < a.size()-1; i++)
	{
		if (a[i] == a[i + 1]) {
			sum++;
			if (i == a.size() - 2) {
				b->push_back(sum);
				break;
			}
		}
		else {
			b->push_back(sum);
			sum = 1;
			if (i == a.size() - 2) {
				b->push_back(sum);
				break;
			}
		}
	}
}
void out(vector <long long> a, vector <int> b) {
	int freq = 0;
	for (int i = 0; i < a.size()-1; i++)
	{
		if (a[i] != a[i + 1]) {
			if (b[freq] != 1)
				cout << a[i] << "^" << b[freq];
			else if (b[freq] == 1)
				cout << a[i];
			if (i != a.size() - 2)
				cout << " * ";
			freq++;
		}

	}
}
