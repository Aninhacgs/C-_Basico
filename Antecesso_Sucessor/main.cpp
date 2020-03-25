#include <iostream>

using namespace std;

int main()
{
    int n,antecessor,sucessor;

    cout << "Digite o valor" << endl;

    cin >> n;

    antecessor = n - 1;
    sucessor = n + 1,

    cout << "O antecessor de " << n << " -> " << antecessor << "\nO sucessor de " << n << " -> " << sucessor << endl;

    return 0;
}
