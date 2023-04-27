#include <iostream>

using namespace std;

int main(){
	int area, altura, base;
	cout << "Digite a Base do Triangulo: ";
	cin >> base;
	cout << "Digite a Altura do Triangulo: ";
	cin >> altura;
	area = (base * altura) /2;
	cout << "A area do triangulo e = " << area << endl;
}