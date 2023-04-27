#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float a, b, c, d, x1, x2;
	cout << "A: ";
	cin >> a;
	if(a != 0){
	cout << "B: ";
	cin >> b;
	cout << "C: ";
	cin >> c;
	d = b * b - 4 * a * c;
	if(d < 0 ){
		cout << "0 raizes reais ";
	}else{
		x1 = (-b -sqrt(d)) / (2 * a);
		if(d == 0){
			cout << "Uma raiz real.";
			cout << x1;
		}else{
			x2 = (-b + sqrt(d)) / (2 * a);
			cout << "Duas raizes reais.";
			cout << x1;
			cout << x2;
		}
	}		
	}else{
		cout << "O A nao pode ser 0";
	}
	return 0;
}