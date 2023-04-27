#include <iostream>

using namespace std;

  main(){
  	string name;
	float salarioReajuste, salarioAtual;
	cout << "Digite o seu nome: " << endl;
	cin >> name;
	cout << "Digite o seu salario atual: " << endl;
	cin >> salarioAtual;
	if(salarioAtual > 0 && salarioAtual < 1000){
        salarioReajuste = salarioAtual * 1.20;
		cout << "Nome: " << "\t" << "Salario Atual: " << "\t" << "Salario Reajustado: " << "\n" << name << "\t" << salarioAtual << "\t" << salarioReajuste << endl;
}else if(salarioAtual > 1000,01 && salarioAtual < 5000){
        salarioReajuste = salarioAtual * 1.10;
		cout << "Nome: " << "\t" << "Salario Atual: " << "\t" << "Salario Reajustado: " << "\n" << name << "\t" << salarioAtual << "\t" << salarioReajuste << endl;
}else if(salarioAtual > 5000){
        salarioReajuste = salarioAtual * 1;
		cout << "Nome: " << "\t" << "Salario Atual: " << "\t" << "Salario Reajustado: " << "\n" << name << "\t" << salarioAtual << "\t" << salarioReajuste << endl;
}
	return 0;
}
