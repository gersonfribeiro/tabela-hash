#include <iostream>
#include <list>
#include <iterator>

class HashTable {
private:
    static const int hashSize = 10;
    std::list<int> table[hashSize]; 

    int hashFunction(int key) {
        return key % hashSize; // Função hash simples
    }

public:
    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key); 
    }

    void remove(int key) {
        int index = hashFunction(key);
        table[index].remove(key); // Remove o elemento da lista
    }

    bool search(int key) {
        int index = hashFunction(key);
        for (int element : table[index]) {
            if (element == key) {
                return true; // Elemento encontrado
            }
        }
        return false; 
    }

    void display() {
        for (int i = 0; i < hashSize; i++) {
            std::cout << "Índice " << i << ": ";
            for (int element : table[i]) {
                std::cout << element << " -> ";
            }
            std::cout << "nullptr" << std::endl; // Final da lista
        }
    }
};

int main() {
    HashTable ht;

    ht.insert(10);
    ht.insert(20);
    ht.insert(30);
    ht.insert(40);
    ht.insert(50);
    
    std::cout << "Tabela Hash após inserções:" << std::endl;
    ht.display();

    ht.remove(30);
    std::cout << "\nTabela Hash após remoção de 30:" << std::endl;
    ht.display();

    std::cout << "\nBusca por 20: " << (ht.search(20) ? "Encontrado" : "Não encontrado") << std::endl;
    std::cout << "Busca por 30: " << (ht.search(30) ? "Encontrado" : "Não encontrado") << std::endl;

    return 0;
}


//insert(int key): Insere uma chave na tabela.
//remove(int key): Remove uma chave da tabela.
//search(int key): Verifica se uma chave existe na tabela.
//display(): Exibe o conteúdo da tabela hash.
//Função main(): Demonstra a inserção, remoção e busca de elementos na tabela hash.
