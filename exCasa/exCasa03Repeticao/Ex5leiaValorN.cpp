#include <iostream>
using namespace std;

int main(){
	float s;
	int i, n;
	cout << "N: ";
	cin >> n;
	s = 0;
	for (i=1; i <= n; i++) {
		s = s + 1 + 1 / i;
	cout << "Serie = " << s << endl;
	}
	return 0;
}
