#include <iostream>

using namespace std;

  main(){
  	int cod;
	float kwhConsumido, kwh, totalAPagar;
	cout << "Digite o seu codigo: " << endl;
	cin >> cod;
	cout << "Digite quantidade de KWH consumido: " << endl;
	cin >> kwhConsumido;
	cout << "Digite o valor do KWH: " << endl;
	cin >> kwh;
	totalAPagar = kwh * kwhConsumido;
	if(totalAPagar < 11.20 ){
		totalAPagar = 11.20;
}
	cout << "Cod: " << "\t" << "Total a pagar: " << "\n" << cod << "\t" << totalAPagar << endl;
	return 0;
}