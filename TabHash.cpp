void HASH_REMOVER(string chave) {
    int indice = funcaoHash(chave);
    int originalIndex = indice; // Guardar o índice original para evitar loops infinitos

    // Tentar encontrar a chave na tabela
    while (tabela[indice] != "") {
        if (tabela[indice] == chave) {
            tabela[indice] = ""; // Remove a chave
            contador--;
            cout << "Chave '" << chave << "' removida do índice " << indice << "." << endl;
            return;
        }
        indice = (indice + 1) % TAM; 
        if (indice == originalIndex) {
            break; // Se voltamos ao índice original, a chave não está na tabela
        }
    }
    cout << "Chave '" << chave << "' não encontrada na tabela." << endl;
}

void HASH_INSERIR(string chave) {
    int indice = funcaoHash(chave);
    if (contador >= 0.75 * TAM) {
        AlmentarTabela();
    }

    
    while (tabela[indice] != "" && tabela[indice] != chave) {
        indice = (indice + 1) % TAM;
    }

  
    if (tabela[indice] == "") {
        tabela[indice] = chave;
        contador++;
        cout << "Chave '" << chave << "' inserida no índice " << indice << "." << endl;
    } else {
        cout << "Chave '" << chave << "' já existe no índice " << indice << "." << endl;
    }
}
