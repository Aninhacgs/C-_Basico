#include <iostream>

using namespace std;

int main()
{
    int placa[4];

    cout << "Digite o primeiro valor da placa" << endl;
    cin >> placa[0];
    while(placa[0]<0 || placa[0]>9){
        cout << "Valor incorreto! Por favor digite novamente" << endl;
        cin >> placa[0];
    }
    cout << "Digite o segundo valor da placa" << endl;
    cin >> placa[1];
    while(placa[1]<0 || placa[1]>9){
        cout << "Valor incorreto! Por favor digite novamente" << endl;
        cin >> placa[1];
    }
    cout << "Digite o terceiro valor da placa" << endl;
    cin >> placa[2];
    while(placa[2]<0 || placa[2]>9){
        cout << "Valor incorreto! Por favor digite novamente" << endl;
        cin >> placa[2];
    }
    cout << "Digite o quarto valor da placa" << endl;
    cin >> placa[3];
    while(placa[3]<0 || placa[3]>9){
        cout << "Valor incorreto! Por favor digite novamente" << endl;
        cin >> placa[3];
    }

    cout << "\n\nPlaca -> " << placa[0] << placa[1] << placa[2] << placa[3] << endl;
    cout << "Casa da milhar -> " << placa[0] << endl;
    cout << "Casa das centenas -> " << placa[1] << endl;
    cout << "Casa das dezenas -> " << placa[2] << endl;
    cout << "Casa das unidades -> " << placa[3] << endl;

    return 0;
}
