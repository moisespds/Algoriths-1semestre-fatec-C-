#include <iostream>
using namespace std;
int main(){
    int salarioAtual, salarioNovo;
    cout << "Digite o Salario atual:";
    cin >> salarioAtual;
    salarioNovo = salarioAtual * 1.25;
    cout << "Seu salario sera ="<< salarioNovo<< endl;
    return 0;
}