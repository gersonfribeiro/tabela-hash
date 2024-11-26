#include <iostream>
#include <string>
#include "TabHash.h"
using namespace std;

int main() {
    int escolha;
    string frase;

    HASH_COSTRUTOR();
    do {
        cout << "1- Adicionar\n2- Imprimir\n3-Sair" << endl;
        cin >> escolha;
        switch (escolha) {
            case 1:
                cout << "Digite a frase que deseja inserir: ";
                cin >> frase;
                HASH_INSERIR(frase);
                break;
            case 2:
                HASH_EXIBIR();
                break;
            case 3:
                break;
            default:
                cout << endl << "Opcao nao encontrada!" << endl;
                break;
        }

    }while (escolha != 3);
    system("pause");
    return 0;
}