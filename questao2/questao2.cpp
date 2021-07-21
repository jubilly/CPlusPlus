#include <iostream>

using namespace std;

int somarVetor(int vetor[]);

int main(){
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    somarVetor(vetor);
    
    return 0;
}
int somarVetor(int vetor[]){
    int soma1 = 0, soma2 = 0, resultado = 0, posicao1 = 0, posicao2 = 0;
    for(int i = 0; i <= 9; i++){
        cout << vetor[i];
        if(i != 9){
            cout << ", ";
        }else{
            cout << ".\n";
        }
    }
    cout << "\nDigite o primeiro valor da soma: ";
    cin >> posicao1;
    cout << "\nDigite o segundo valor da soma: ";
    cin >> posicao2;
    for(int i = 0; i <= 9; i++){
        if(posicao1 == vetor[i]){ 
            soma1 = posicao1;
        }
        else if(posicao2 == vetor[i]){ 
            soma2 = posicao2;
        }
    }
    if(soma1 != 0 && soma2 != 0){
        resultado = soma1 + soma2;
        cout<<"\nO resultado da soma eh: " << resultado << "\n";
    }else{
        cout <<"\nDigite um valor existente no vetor \n";
    }
    
}