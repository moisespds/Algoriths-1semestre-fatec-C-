#include <iostream>

using namespace std;

  main(){
	int n1, n2;
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;
	if(n1 > n2){
		cout << n2 << "-" << n1;
	}else{
		cout << n1 << "-" << n2;
	}
}