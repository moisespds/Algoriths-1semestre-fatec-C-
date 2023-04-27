#include <iostream>
#include <math.h>
#define TERMOS 15
using namespace std;

int main(){
	float s, x;
	int i, n, pot;
	cout << "X: ";
	cin >> x;
	s = 0;
	pot = 2;
	for (i=1; i <= TERMOS; i++) {
		s = s + 1 + (pow(x, pot) / i);
		pot++;
	cout << "Serie = " << s<< endl;
	}
	return 0;
}
