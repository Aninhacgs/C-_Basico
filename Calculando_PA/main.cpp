#include <iostream>

using namespace std;

int main()
{
    int n;
    float r,a1,an;

    cout << "Digite a quantidade de termos" << endl;
    cin >> n;
    cout << "Digite o valor do primeiro termo" << endl;
    cin >> a1;
    cout << "Digite o valor da razao" << endl;
    cin >> r;

    an = a1 + (n-1) * r;

    cout << "O valor da P.A -> " << an << endl;


    return 0;
}
