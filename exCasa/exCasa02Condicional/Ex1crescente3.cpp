#include <iostream>

using namespace std;

  main(){
	int n1, n2, n3;
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;
	cout << "Digite um numero: "; 
	cin >> n3;
	if(n1 > n2 && n1 > n3 && n2 > n3){
		cout << n3 << "-" << n2 << "-" << n1 << endl;
	}
	else if(n3 > n2 && n3 > n1 && n2 > n1){
		cout << n1 << "-" << n2 << "-" << n3 << endl;
	}
	else if(n1 > n2 && n3 > n2 && n1 > n3){
		cout << n2 << "-" << n3 << "-" << n1 << endl;
	}
	else if(n1 > n3 && n2 > n3 && n2 > n1){
		cout << n3 << "-" << n1 << "-" << n2 << endl;
	}
	else if(n3 > n1 && n2 > n3 && n2 > n1){
		cout << n1 << "-" << n3 << "-" << n2 << endl;
	}
	else if(n3 > n1 && n1 > n2 && n3 > n2){
		cout << n2 << "-" << n1 << "-" << n3 << endl;
	}
return 0;
} 