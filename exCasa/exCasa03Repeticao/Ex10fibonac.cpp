#include <iostream>

using namespace std;

int main() {
    int n, i, fibo1, fibo2, fiboN;
    cout << "Digite um valor inteiro maior ou igual a 2: ";
    cin >> n;
    fibo1 = 1;
    fibo2 = 1;
    cout << "1 1 ";
    for (i = 3; i <= n; i++) {
        fiboN = fibo1 + fibo2;
        cout << fiboN << " ";
        fibo1 = fibo2;
        fibo2 = fiboN;
    }

    cout << endl;

    return 0;
}
