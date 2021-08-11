#include <iostream>
#include <list>
#include <stdlib.h>

using namespace std;

struct contato
{
    string nome;
    int telefone;
    int endereco;
};

contato addFimLista()
{

    contato aux;

    cout << "Insira o nome:";
    getline(cin, aux.nome);

    cin.ignore();
    cout << "Insira o telefone:";
    cin >> aux.telefone;

    cout << "Insir o endereço:";
    cin >> aux.endereco;

    return aux;
}

contato addLista()
{
}

void imprimirTodos(list<contato> aux)
{
    system("cls");
    cout << "Lista de contatos\n\n";
    int i = 1;
    while (aux.size() != 0)
    {
        cout << "# Contato " << i << "\n\n";
        cout << "Nome:" << aux.front().nome << '\n';
        cout << "Telefone" << aux.front().telefone << '\n';
        cout << "Endereço:" << aux.front().endereco << "\n\n";
        aux.pop_front();
        i++;
    }
    system("pause");
}
void procurar(list<contato> aux)
{
    system("cls");
    string nome;
    cout << "Insira o nome:";
    getline(cin, nome);
    cin.ignore();

    while (aux.size() != 0)
    {
        if (aux.front().nome == nome)
        {
            cout << "Telefone:" << aux.front().telefone << '\n';

            break;
        }
        aux.pop_front();
    }
    if (aux.size() == 0)
    {
        cout << "Telefone não achado\n";
    }
    system("pause");
}

int apagarPorNome(list<contato> aux, string nome)
{
    int i = 0;
    while (aux.size() != 0)
    {
        if (aux.front().nome == nome)
        {
            return i;
        }
        aux.pop_front();
        i++;
    }
    cout << "Nome não encontrado\n";
}

int main()
{
    list<contato> agenda;
    list<contato>::iterator i;

    while (true)
    {
        system("cls");
        int opcao;
        cout << "1 - Incluir no fim da lista\n2 - Incluir em uma determinada posição\n3 - Imprimir todos os contatos\n4 - Procurar uma pessoa por nome e imprimir o telefone\n5 - Apagar um contato por posição na lista\n6 - Apagar um contato por nome\n7 - Substituir um contato por posição\n8 - Substituir  um contato pelo nome\n9 - Excluir todos os contatos da agenda\nEscolha uma opção:";
        cin >> opcao;

        switch (opcao)
        {
        case 0:
            return 0;
            break;
        case 1:
            system("cls");
            agenda.push_back(addFimLista());
            break;
        case 3:
            imprimirTodos(agenda);
            break;
        case 4:
            procurar(agenda);
            break;
        case 2:;
            {
                system("cls");
                i = agenda.begin();
                int pos;
                cout << "Insira a posição(começa do 1):";
                cin >> pos;
                advance(i, --pos);
                system("cls");
                contato x = addFimLista();
                agenda.insert(i, x);
                system("pause");
            }
            break;
        case 5:
        {
            system("cls");
            i = agenda.begin();
            int pos;
            cout << "Insira a posição(começa do 1):";
            cin >> pos;
            advance(i, --pos);
            agenda.erase(i);
            system("pause");
        }
        break;

        case 6:
        {
            system("cls");
            string n;
            cout << "Insira o nome:";
            cin.ignore();
            getline(cin, n);
            int j = apagarPorNome(agenda, n);
            i = agenda.begin();
            advance(i, j);
            agenda.erase(i);
            system("pause");
        }
        break;
        case 7:
        {
            system("cls");
            i = agenda.begin();
            int pos;
            cout << "Insira a posição(começa do 1):";
            cin >> pos;
            advance(i, --pos);
            system("cls");
            contato x = addFimLista();
            agenda.insert(i, x);
            agenda.erase(i);
            system("pause");
        }
        break;
        case 8:
        {
            i = agenda.begin();
            system("cls");
            string n;
            cout << "Insira o nome:";
            getline(cin, n);
            cin.ignore();
            int j = apagarPorNome(agenda, n);
            advance(i, j);
            system("cls");
            cout << "Aperte Enter";
            contato x = addFimLista();
            agenda.insert(i, x);
            agenda.erase(i);
            system("pause");
        }
        break;
        case 9:
        {
            system("cls");
            agenda.clear();
            cout << "Contatos excluídos\n";
            system("pause");
        }
        break;
        }
    }
    return 0;
}
