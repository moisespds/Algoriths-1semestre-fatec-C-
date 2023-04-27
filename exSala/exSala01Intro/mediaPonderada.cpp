#include <iostream>

using namespace std;

int main(){
	int n1, n2, media;
	cout << "Digite sua primeira nota:";
	cin >> n1;
	cout << "Digite sua segunda nota:";
	cin >> n2;
	media = ((n1 * 6) + (n2 * 4)) / 10;
	cout << "Sua nota final e = " << media << endl;
}