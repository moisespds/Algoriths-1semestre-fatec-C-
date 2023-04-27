#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3, media;
	cout << "Digite sua primeira nota:";
	cin >> n1;
	cout << "Digite sua segunda nota:";
	cin >> n2;
	cout << "Digite sua terceira nota:";
	cin >> n3;
	media = ((n1 * 6) + (n2 * 4) + (n3 * 2)) / 12;
	cout << "Sua nota final e = " << media << endl;
}
