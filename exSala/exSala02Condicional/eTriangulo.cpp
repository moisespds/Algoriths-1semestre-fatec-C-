#include <iostream>

using namespace std;

  main(){
	int x, y, z;
	cout << "Digite um numero: ";
	cin >> x;
	cout << "Digite outro numero: ";
	cin >> y;
	cout << "Digite outro numero: ";
	cin >> z;
	if(x < y + z){
	 if(x != y && y != z && z != x){
		cout << "E um triangulo Escaleno";
	}else if(x == y && y == z && x == z){
	 cout << "E um triangulo Equilatero";
} else if (y == z && y != x && z != x){
	 cout << "E um triangulo Isosceles";
	}        
	}else{
		cout << "Nao e um triangulo";
	}
}