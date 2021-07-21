#include<iostream>
#include<string>
#include<string.h>

using namespace std;
string removeEspacos(string palavra, int tamanho);
bool Palindrome(string palavra, int tamanho);
int main(){
    string str;
    int tamanho;
    cout<<"Digite uma string: ";
    getline(cin, str);
    tamanho=str.length();
    cout << removeEspacos(str, tamanho);
    // cout << Palindrome(str, tamanho);

return 0;
}
string removeEspacos(string str, int tamanho){
    int i, j;
    string palavra = str;
    for(i=0;i<tamanho;i++){
        if(palavra[i]==' '){
            for(j=i;j<tamanho;j++){
                palavra[j]=palavra[j+1];
            }
                tamanho--;
            
        }
    }   
    cout<<"\nResultado da string: "<< palavra << "\n";
    cout << Palindrome(palavra, tamanho);
}
bool Palindrome(string str, int tamanho){
    cout << str;
    bool x = true;
    int tamanhoPalindrome = tamanho - 1;
    for( int i=0;i< tamanhoPalindrome ;i++){
        if(str[i] != str[tamanhoPalindrome]){
            x = false;
        }
        tamanhoPalindrome--;
    }
    if(x)
        cout<<"\nPalindrome\n";
    else
        cout<<"\nNao palindrome\n";
    
}