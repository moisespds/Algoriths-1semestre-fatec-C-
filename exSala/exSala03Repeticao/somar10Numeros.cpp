#include <iostream>

using namespace std;

int main(){
 int n, i, soma;
 soma = 0;
 for(i=1; i<=10; i++;){
 	cout << "Digite um Numero: ";
 	cin >> n;
 	soma = soma + n;
 }
 cout << "Soma = " << soma << endl;
 return 0;
}

