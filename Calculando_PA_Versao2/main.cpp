#include <iostream>

using namespace std;

int main()
{
    int n,k;
    float r,ak,an;

    cout << "Digite a quantidade de termos da P.A" << endl;
    cin >> n;
    cout << "Digite o termo que deseja calcular" << endl;
    cin >> k;
    cout << "Digite o valor do termo a ser calculado" << endl;
    cin >> ak;
    cout << "Digite o valor da razao" << endl;
    cin >> r;

    an = ak + (n - k) * r;

    cout << "O valor da P.A -> " << an << endl;

    return 0;
}
