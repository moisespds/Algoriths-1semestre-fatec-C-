#include <iostream>
#include <cmath>

using namespace std;

int main(){
	unsigned char n1;
	int aoQuadrado, aoCubo;
	cout << "Digite um numero:";
	cin >> n1;
	aoQuadrado = n1 * n1;
	aoCubo = n1 * n1 * n1;
	cout << n1 << " "<< "Ao quadrado e = " << aoQuadrado << "\n" <<  n1 << " " << "Ao cubo e = " << aoCubo << "\n" << "A raiz quadrada e =" << sqrt(n1) << endl;
}