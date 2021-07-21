#include <iostream>

using namespace std;

// Num. placas de 1 a 2999
// as letras I, X, C e M podem ser repetidas no máximo 3x
// as letras I, X e C podem ser escritas na frente ou atrás de outras. 
// Na frete, devemos somar os valores delas.
// Caso escritas atrás de outra, devemos subtrair o valor delas.
int main (){
    int numeroPlaca;
    int numeroPlacaRomano;
    string iRomano = "I";
    string vRomano = "V";
    string xRomano = "X";
    string cRomano = "C";
    string mRomano = "M";

    cout << "\nDigite um numero: ";
    cin >> numeroPlaca;
    if(numeroPlaca > 0 && numeroPlaca < 3000){
        cout << "\nNumero convertido: ";
        if(numeroPlaca < 4){
            for(int i = 0; i < numeroPlaca; i++){
                cout << iRomano;
            }
        }else{
            if(numeroPlaca == 4 ){
                cout << iRomano << vRomano;
            }
        }
        if(numeroPlaca >= 5 && numeroPlaca < 10){
            if(numeroPlaca == 5){
                cout << vRomano;       
            }else{
                if(numeroPlaca < 9){
                    numeroPlacaRomano = numeroPlaca - 5;
                    cout << vRomano;       
                    for(int j = 0; j < numeroPlacaRomano; j++){
                        cout << iRomano;
                    }
                }else{
                    cout << vRomano << iRomano;
                } 
            }
        }
        if(numeroPlaca >= 10){
            cout << xRomano;
            if(numeroPlaca > 10){
                numeroPlacaRomano = numeroPlaca - 10;
                for(int j = 0; j < numeroPlacaRomano; j++){
                    cout << iRomano;
                }
            }else{
                if(numeroPlaca == 14){
                    cout << iRomano << xRomano << iRomano;
                }
            } 
        }
        
    }
    else
        cout << "Numero digitado fora do intervalo, digite um numero entre 1 e 2999 \n";   

    cout << "\n\n";
    

    return 0;
}