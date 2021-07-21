#include <iostream>
#include <string>
using namespace std;

string inverte(string palavra);

int main(){
    string palavra, letra;
    cout<<"\nDigite uma palavra: \n";
    getline(cin, palavra);
    inverte(palavra);

}
string inverte(string palavra){
    int i = 0;
    i = palavra.length() - 1;
    for(i; i >= 0; i--){
       cout << palavra.at(i) << " ";
    }
}