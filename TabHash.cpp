//
// Created by Caio Moreira Cancela on 25/11/2024.
//
#include "TabHash.h"
#include <iostream>
#include <string>
using namespace std;

int TAM = 20,contador =0;
string *tabela = new string[TAM];

void AlmentarTabela() {
    int tamanhoAnterior = TAM;
    TAM *= 2;

    string *novatabela = new string[TAM];

    for (int i = 0; i < TAM; i++) {
        novatabela[i] = "";
    }
    for (int i = 0; i < tamanhoAnterior; i++) {
            novatabela[i] = tabela[i];
    }
    free(tabela);
    tabela = novatabela;
}

void HASH_COSTRUTOR() {
    for (int i = 0; i < TAM; i++) {
        tabela[i] = "";
    }
}

int funcaoHash(string chave) {
    int SomaCaracter = 0;
    for (int i =0;i < chave.size();i++) {
        SomaCaracter += chave[i];
    }
    return SomaCaracter % TAM;
}



void HASH_INSERIR(string chave) {
    int indice = funcaoHash(chave);
    if (contador >= 0.75 *TAM) {
        AlmentarTabela();
    }
    if (tabela[indice] == "") {
        tabela[indice] = chave;
        contador++;
        cout << "Chave '" << chave << "' inserida no indice " << indice << "." << endl;
    } else {
        //espaço para inserir tratamento de colisoes
    }
}


void HASH_EXIBIR() {
    cout << "Tabela Hash:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << i << ": " << tabela[i] << endl;
    }
}

