/*
  2018 3 30:01:00 <create>
  CMM17 easy
  找最大公因數
*/
#include <iostream>
#include <vector>
using namespace std;
void cmp(int num);
int main() {
	vector <int> word;
	vector <int> word1;
	vector <int> word2;
	int a, b;
	cin >> a >> b;
	for (int i = 1; i <= a; i++)
	{
		if (a%i == 0)
			word1.push_back(i);
	}
	for (int i = 1; i <= b; i++)
	{
		if (b%i == 0)
			word2.push_back(i);
	}
	for (int i = 0; i < word1.size(); i++) {
		for (int j = 0; j < word2.size(); j++) {
			if (word1[i] == word2[j]) {
				word.push_back(word2[j]);
			}
		}
	}
	int x = word.size() - 1;
	cout << word[x] << endl;
	return 0;
}
