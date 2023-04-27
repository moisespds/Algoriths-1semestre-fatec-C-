#include <iostream>

using namespace std;

int main(){
	int i, n, s;
    cout << "N: ";
	cin >> n;
	s = 0;
	for (i=1; i <= n; i++) {
    s = s + i;
	cout << s << "-";
	}
	return 0;
}
