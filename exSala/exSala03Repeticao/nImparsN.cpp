#include <iostream>

using namespace std;

 int main(){
 	int qtdd, n, i;
 	n = 1;
 	cout << "Digite um numero: ";
 	cin >> qtdd;
 	while(qtdd < 0){
 	 	cout << "Digite um numero: ";
 		cin >> qtdd;
		 }
		 for(i = 0; i <= qtdd; i++){
		 	cout << " " << n;
		 	n = n + 2;
		 }
	 return 0;
}