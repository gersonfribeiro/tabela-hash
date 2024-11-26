//
// Created by Caio Moreira Cancela on 25/11/2024.
//
#include "TabHash.h"
#include <iostream>
#include <string>

using namespace std;

// Inicializa a tabela hash com valores vazios
void inicializarTabela(string tabela[]) {
    for (int i = 0; i < TAM; i++) {
        tabela[i] = "";
    }
}

// Função hash simples: converte a chave em um índice
int funcaoHash(const string chave) {
    if (chave.empty()) return 0; // Caso de string vazia

    int primeiro = chave[0];        // Valor ASCII do primeiro caractere
    int ultimo = chave[chave.size() - 1]; // Valor ASCII do último caractere

     return (primeiro + ultimo * 31) % TAM; // 31 é um número primo para maior dispersão
}


// Insere uma chave na tabela hash sem tratar colisões
void inserir(string tabela[], const string chave) {
    int indice = funcaoHash(chave);
    if (tabela[indice] == "") {
        tabela[indice] = chave;
        cout << "Chave '" << chave << "' inserida no índice " << indice << "." << endl;
    } else {
        //espaço para inserir tratamento de colisoes
    }
}

// Exibe o conteúdo da tabela hash
void exibirTabela(const string tabela[]) {
    cout << "Tabela Hash:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << i << ": " << tabela[i] << endl;
    }
}

