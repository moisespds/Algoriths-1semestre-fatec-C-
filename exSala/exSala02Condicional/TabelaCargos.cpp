  #include <iostream>

using namespace std;

  main(){
	int codCargo;
	float salarioAtual, salarioNovo;
	cout << "Digite o codigo do seu cargo: ";
	cin >> codCargo;
	cout << "Digite o seu salario atual: ";
	cin >> salarioAtual;
	switch(codCargo){
		case 1:
			salarioNovo = salarioAtual * 1.50;
			cout << "Cargo:" << "\t" << "Percentual:" << "\t" << "Salario Novo:" << "\n" << "Escrituario" << "\t" << "\t" << "50%" << "\t" << "\t" << salarioNovo << endl;
			break;
		case 2:
			salarioNovo = salarioAtual * 1.35;
			cout << "Cargo:" << "\t" << "Percentual:" << "\t" << "Salario Novo:" << "\n" << "Secretario" << "\t" << "\t" << "35%" << "\t" << "\t" << salarioNovo << endl;
			break;
		case 3:
			salarioNovo = salarioAtual * 1.20;
			cout << "Cargo:" << "\t" << "Percentual:" << "\t" << "Salario Novo:" << "\n" << "Caixa" << "\t" << "\t" << "20%" << "\t" << "\t" << salarioNovo << endl;
			break;
		case 4:
			salarioNovo = salarioAtual * 1.10;
			cout << "Cargo:" << "\t" << "Percentual:" << "\t" << "Salario Novo:" << "\n" << "Gerente" << "\t" << "\t" << "10%" << "\t" << "\t" << salarioNovo << endl;
			break;
		case 5:
			cout << "Cargo:" << "\t" << "Percentual:" << "\t" << "Salario Novo:" << "\n" << "Diretor" << "\t" << "\t" << "0%" << "\t" << "\t" << salarioAtual << endl;
			break;
	}
} 