#include <iostream>

using namespace std;

int maiorNumero(int vetor[], int tamanho);

int main(){
    int tamanho = 10;
    int vetor[tamanho];
    cout<< "\nPreencha o vetor de 10 posicoes ";
    for(int i = 0; i < tamanho; i++){
        cout<< "\nDigite o numero da posicao " << i << ": ";
        cin >> vetor[i];
    }
    for(int j = 0; j < tamanho;j++){
        cout<< vetor[j];
        if(j != 9){
            cout << ", ";
        }else{
            cout << ".\n";
        }
    }
    maiorNumero(vetor, tamanho);
    
    return 0;
}
int maiorNumero(int vetor[], int tamanho){
    int maior = vetor[0];
    for(int k = 0; k < tamanho; k++){
        if(vetor[k] > maior)
            maior = vetor[k];
    }
    cout << "\n O maior numero do vetor eh: " << maior;
}