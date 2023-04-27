#include <iostream>

using namespace std;

int main(){
 int idade, soma, qtdd;
 float media;
 cout << "Idade: ";
 cin >> idade;
 soma = 0;
 qtdd = 0;
 while (idade > 0){
  soma = soma + idade;
  qtdd++;
  cout << "Idade: ";
  cin >> idade;	
 }
 if(qtdd = 0){
 	media = 0;
 }else{
 	media = soma / qtdd;
 }
 return 0;
}

