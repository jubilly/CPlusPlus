#include <iostream>

using namespace std;
int tamanho = 8;
bool pesquisaElemento(int n, int vetB[]);
int main (){
        int vetA[tamanho],
        vetB[tamanho],
        parada = 0,
        n = 0;
    for(int i=1; i <= tamanho; i++){
        cout<<"\nDigite um numero na posicao " << i << ": \n";
        cin>>vetA[i];
    }
    for(int j = 1; j <= tamanho; j++)
        vetB[j] = vetA[j] * 5;
    system("cls");
    cout << "\nVetB multiplicado por 5: \n";
    for(int k = 1; k <= tamanho; k++)
        cout << vetB[k] <<" ";
    cout << "\n";
    do{
        cout<<"\nDigite um numero para pesquisar na vetB: \n";
        cin>> n;
        cout << pesquisaElemento(n,vetB) << "\n";
        cout <<"\nDigite 0 para  continuar: \n";
        cin>> parada;
    } while (parada == 0);
    return 0;
}

bool pesquisaElemento(int n, int vetB[]){
    int count = 0,
        verifica = n;
    bool existe = true,
        naoexiste = false;
    for(int l=0; l <= tamanho; l++)
        if(vetB[l] == verifica)
            count = count + 1;
    if(count == 0)
        return naoexiste;
    else
        return existe;
    
}