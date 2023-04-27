#include <iostream>

using namespace std;

 int main(){
 	int n;
 	n = 1;
 	while((n % 3 != 2 || n % 5 != 3 || n % 7 != 4)){
 		n++;
	 }
	 cout << n;
	 return 0;
 }