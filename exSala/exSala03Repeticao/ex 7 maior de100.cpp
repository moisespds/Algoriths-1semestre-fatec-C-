#include <iostream>
#include <cstdlib>
#define QTDD 100

using namespace std;

int main(){
	int i, maior, n;
	maior = 0;
	for (i=1; i<=QTDD; i++) {
		srand(i);
		n = rand();
	cout << "Nro: " << n << endl;
	if(n > maior) {
		maior = n;
	}
}
	cout << maior << endl;
	return 0;
}   