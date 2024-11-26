do {
    cout << "1- Adicionar\n2- Imprimir\n3- Remover\n4- Sair" << endl;
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
            cout << "Digite a frase que deseja remover: ";
            cin >> frase;
            HASH_REMOVER(frase);
            break;
        case 4:
            break;
        default:
            cout << endl << "Opcao nao encontrada!" << endl;
            break;
    }

} while (escolha != 4);
