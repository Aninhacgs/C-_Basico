#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *p;
    int *y;
    //Inicializando ponteiro com NULL
    *y = NULL;
    //Solicitar mem�ria
    y = new int[20];
    //Solicitar Mem�ria
    int *pp = new int;
    p = &x;
    *pp = 34;

    cout << "Endereco de x -> " << &x << endl;
    cout << "Conteudo de x -> " << x << endl;
    cout << "Conteudo de p -> " << p << endl;
    cout << "conteudo do que e apontado por p -> " << *p << endl;
    cout << *pp << endl;

    //Liberar mem�ria
    delete pp;

    //Reutilizar para novo endere�o
    pp = new int;

    //Excluir array apontado por y
    delete []y;

    return 0;
}
