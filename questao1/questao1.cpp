#include <iostream>

using namespace std;

float conversao(float valor, int qtd);

int main(){
    float valorCotacaoDolar;
    int qtdDolar;

    cout<< "\nDigite o valor do dolar: ";
    cin >> valorCotacaoDolar;

    cout << "\nDigite a quantidade de dolar disponivel: ";
    cin >> qtdDolar;

    cout << "\nO valor do dolar em real e:";
    conversao(valorCotacaoDolar, qtdDolar);

    return 0;
}

float conversao(float valor, int qtd){

    float reais;

    reais = valor * qtd;

    cout << reais;
}