#include <iostream>

using namespace std;
  main(){
    int calc, i, number;
    calc = 0;
    cout << "Digite um numero: " << endl;
    cin >> number;
    int vet[number];
    for(i=1;  i<= number; i++){
        calc = calc + i;
        cout << "Soma: " << calc << endl;
    }
    cout << "Total da Soma: " << calc << endl;
	return 0;
}
