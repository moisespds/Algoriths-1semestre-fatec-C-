#include <iostream>
#define TERMOS 10
using namespace std;

int main(){
	float x, s;
	int i, sinal;
	cout << "x: ";
	cin >> x
	s = 0;
	sinal = 1;
	for (i=1; i<=TERMOS; i++) {
		s = s + sinal * x / i;
		sinal = -1 * sinal;
	}
	cout << "Serie = " << s;
	return 0;
}                                                                    