#include <iostream>

using namespace std;

  main(){
  	int massa;
	float peso, altura;
	cout << "Digite o seu peso: " << endl;
	cin >> peso;
	cout << "Digite a sua altura: " << endl;
	cin >> altura;
	massa = peso / (altura * altura);
	if(massa < 26){
		cout << massa << "-" << "Voce esta normal"<< endl;
}else if(massa > 26 && massa < 30){
	cout << massa << "-" << "Voce esta obeso"<< endl;
}else if(massa >= 30){
	cout << massa << "-" << "Voce esta em obesidade morbida"<< endl;
}
	return 0;
}
