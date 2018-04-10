#include <iostream>

using namespace std;
bool cmp(long long a);
int main(){
	long long number;
	cin >> number;
	if(cmp(number)==true)
		cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
bool cmp(long long a){
	bool k=true;
	for(int i=2;i<a;i++){
		if(a%i==0){
			k=false;
			break;
		}
	}
	return k;
}
