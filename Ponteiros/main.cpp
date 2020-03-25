#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *p;
    int *y;
    //Inicializando ponteiro com NULL
    *y = NULL;
    //Solicitar memória
    y = new int[20];
    //Solicitar Memória
    int *pp = new int;
    p = &x;
    *pp = 34;

    cout << "Endereco de x -> " << &x << endl;
    cout << "Conteudo de x -> " << x << endl;
    cout << "Conteudo de p -> " << p << endl;
    cout << "conteudo do que e apontado por p -> " << *p << endl;
    cout << *pp << endl;

    //Liberar memória
    delete pp;

    //Reutilizar para novo endereço
    pp = new int;

    //Excluir array apontado por y
    delete []y;

    return 0;
}
