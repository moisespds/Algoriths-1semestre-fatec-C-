#include <iostream>

using namespace std;

  main(){
	string produto1, produto2, produto3;
	int qtdp1, qtdp2, qtdp3;
	float p1, p2, p3, pTotal, subTotal1, subTotal2, subTotal3;
	qtdp1 = 0;
	qtdp2 = 0;
	qtdp3 = 0;
	produto1 = "Samsung Galaxy S23: ";
    p1 = 6400 ;
	produto2 = "Geforce RTX 3090TI: ";
	p2 = 8200 ;
	produto3 = "Inte core I9 13900ks: ";
	p3 = 6000 ;
	cout << "Nome do Produto: " << "\t" << "Preco do Produto: " << "\t" << "Qtd do Produto: "  << "\n" <<  produto1 << "\t" << "\t" << "\t" << p1 << "\t" << "\t" << "\t" << qtdp1 << "\n" << produto2 << "\t" <<  "\t" << "\t" <<  p2 << "\t" << "\t" << "\t" << qtdp2 << "\n" << produto3 << "\t" <<  "\t" << "\t" <<  p3 << "\t" << "\t" << "\t" << qtdp3 << endl;
	cout << "Insira a quantidade do primeiro produto:" << endl;
	cin >> qtdp1;
	cout << "Insira a quantidade do segundo produto:" << endl;
	cin >> qtdp2;
	cout << "Insira a quantidade do terceiro produto:" << endl;
	cin >> qtdp3;
	subTotal1 = p1 * qtdp1;
	subTotal2 = p2 * qtdp2;
	subTotal3 = p3 * qtdp3;
	pTotal = subTotal1 + subTotal2 + subTotal3;
	cout << "Nome do Produto: " << "\t" << "Preco do Produto: " << "\t" << "Qtd do Produto: " << "SubTotal: " << "\n" <<  produto1 << "\t" << "\t" << "\t" << p1 << "\t" << "\t" << "\t" << qtdp1 << "\t" << "\t" << "\t" << subTotal1 << "\n" << produto2 << "\t" <<  "\t" << "\t" <<  p2 << "\t" << "\t" << "\t" << qtdp2 << "\t" << "\t" << "\t" << subTotal2 << "\n" << produto3 << "\t" <<  "\t" << "\t" <<  p3 << "\t" << "\t" << "\t" << qtdp3 << "\t" << "\t" << "\t" << subTotal3 << "\n" << "Total do carrinho: " << pTotal << endl;
}
