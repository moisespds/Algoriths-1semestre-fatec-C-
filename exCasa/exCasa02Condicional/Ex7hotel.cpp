#include <iostream>

using namespace std;

int main(){
    string name;
    char qualAp;
	int consumo, diarias , total, subTotal;
	cout << "Qual seu nome?: ";
	cin >> name;
	cout << "Quantos dias voce ficou?: ";
	cin >> diarias;
	cout << "Qual o apartamento hospedado?: ";
	cin >> qualAp;
    cout << "Houve consumo interno, se sim digite o valor, se nao digite 0?: ";
	cin >> consumo;
	switch(qualAp){
     case 'a':
     subTotal = (diarias * 150) + consumo;
     total = subTotal * 1.10;
    	cout << "Nome do Hospede: " << "\t" << "Preco da diaria: " << "\t" << "Total de Diarias: " << "\t" << "Qual o AP: " << "\t" << "Valor de consumo interno" << "\t" << "SubTotal: " << "\t" << "Taxa de servicos" << "\n" <<  name << "\t" << "\t" << "\t" << "150" << "\t" << "\t" << "\t" << diarias
	<< "\t" << "\t" << "\t" << qualAp << "\t" << "\t" << "\t" << consumo << "\t" << "\t" << "\t" << subTotal << "\t" << "\t" << "\t" << "+10%" << "\n" << "Total: " << total << endl;
	break;
	case 'b':
	     subTotal = (diarias * 100) + consumo;
        total = subTotal * 1.10;
    	cout << "Nome do Hospede: " << "\t" << "Preco da diaria: " << "\t" << "Total de Diarias: " << "\t" << "Qual o AP: " << "\t" << "Valor de consumo interno" << "\t" << "SubTotal: " << "\t" << "Taxa de servicos" << "\n" <<  name << "\t" << "\t" << "\t" << "100" << "\t" << "\t" << "\t" << diarias
	<< "\t" << "\t" << "\t" << qualAp << "\t" << "\t" << "\t" << consumo << "\t" << "\t" << "\t" << subTotal << "\t" << "\t" << "\t" << "+10%" << "\n" << "Total: " << total << endl;
	break;
	case 'c':
	     subTotal = (diarias * 75) + consumo;
     total = subTotal * 1.10;
    	cout << "Nome do Hospede: " << "\t" << "Preco da diaria: " << "\t" << "Total de Diarias: " << "\t" << "Qual o AP: " << "\t" << "Valor de consumo interno" << "\t" << "SubTotal: " << "\t" << "Taxa de servicos" << "\n" <<  name << "\t" << "\t" << "\t" << "75" << "\t" << "\t" << "\t" << diarias
	<< "\t" << "\t" << "\t" << qualAp << "\t" << "\t" << "\t" << consumo << "\t" << "\t" << "\t" << subTotal << "\t" << "\t" << "\t" << "+10%" << "\n" << "Total: " << total << endl;
	break;
	case 'd':
	     subTotal = (diarias * 50) + consumo;
     total = subTotal * 1.10;
    	cout << "Nome do Hospede: " << "\t" << "Preco da diaria: " << "\t" << "Total de Diarias: " << "\t" << "Qual o AP: " << "\t" << "Valor de consumo interno" << "\t" << "SubTotal: " << "\t" << "Taxa de servicos" << "\n" <<  name << "\t" << "\t" << "\t" << "50" << "\t" << "\t" << "\t" << diarias
	<< "\t" << "\t" << "\t" << qualAp << "\t" << "\t" << consumo << "\t" << "\t" << "\t" << "\t" << subTotal << "\t" << "\t" << "\t" << "+10%" << "\n" << "Total: " << total << endl;
	break;
        default:
       cout << "Opcao invalida!" << endl;
	}
	return 0;
}
