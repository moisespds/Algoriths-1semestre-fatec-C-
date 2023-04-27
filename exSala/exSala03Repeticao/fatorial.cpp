#include <iostream>

using namespace std;

  main(){
	int n, f, i;
	cout << "Digite um numero: ";
	cin >> n;
	f = 1;
	for(i = 1; i <= n; i++){
		f = f * i;
	}
	cout << n << "! =" << f << endl;
	return 0;
}