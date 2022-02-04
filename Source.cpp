#include <iostream>
using namespace std;
void main() {
	int num, i=1, even, n;
	cout << "inter count of your numbers\n";
	cin >> n;
	cout << "inter numbers\n";
	for(i;i<=n;i++){
		cin >> num;
		if (num % 10 == 5) 
			cout << "the first number of "<<num<<" is 5\n";
	}
}
