#include <iostream>

using namespace std;

  main(){
	char aluno1[30], aluno2[30], aluno3[30];
	int n1, n2, n3;
	cout << "Nome do primeiro aluno: ";
	cin >> aluno1;
	cout << "Nota do primeiro aluno: ";
	cin >> n1;
	cout << "Nome do segundo aluno: ";
	cin >> aluno2;
	cout << "Nota do segundo aluno: ";
	cin >> n2;
	cout << "Nome do terceiro aluno: ";
	cin >> aluno3;
	cout << "Nota do terceiro aluno: ";
	cin >> n3;
	cout << "Nome do Aluno: " << "\t" << "Nota do Aluno: " << "\n" <<  aluno1 << "\t" << "\t" << "\t" <<   n1 << "\n" << aluno2 << "\t" <<  "\t" << "\t" <<  n2 << "\n" << aluno3 << "\t" <<  "\t" << "\t" <<  n3 << endl;
}