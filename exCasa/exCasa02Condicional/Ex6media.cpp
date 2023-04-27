#include <iostream>

using namespace std;

int main(){
	float n1, n2, n3, media;
	cout << "Digite sua primeira nota:";
	cin >> n1;
	cout << "Digite sua segunda nota:";
	cin >> n2;
	cout << "Digite sua terceira nota:";
	cin >> n3;
	media = ((n1 * 6) + (n2 * 3) + (n3 * 1)) / 10;
	if(media > 10 && media < 0){
    cout << "A nota nao pode ser menor que 0 e nem maior que 10" << endl;
    cout << "Digite sua primeira nota:";
	cin >> n1;
	cout << "Digite sua segunda nota:";
	cin >> n2;
	cout << "Digite sua terceira nota:";
	cin >> n3;
	}
	else if( media >= 8.0){
	cout << "Sua nota final e = A" << " - " << media << endl;
	}
	else if(media >= 5.0 && media < 8.0){
	cout << "Sua nota final e = B" << " - " << media << endl;
	}
	else if(media < 5.0){
	cout << "Sua nota final e = C" << " - " << media << endl;
	}
	return 0;
}
