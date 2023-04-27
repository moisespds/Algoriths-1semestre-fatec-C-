#include <iostream>

using namespace std;

int main() {
	int faren, celsius;
	cout << "Qual a temperatura em farenheit: ";
	cin >> faren;
	celsius = (faren - 32) / 1.8;
	cout << "A temperatura em celcius e = " << celsius << endl;
}