#include<iostream>
#include<cstring>

using namespace std;
void modificaString(char str[], char* copyString);

int main(){
    char string[30];  
    char copyString[30]; 
   
    memset(string, 0, sizeof(string));  
    memset(copyString, 0, sizeof(copyString));

    cout << "Digite uma palavra : ";
    cin >> string; 

    modificaString(string, copyString); 
    cout << "\nPalavra alterada: " << copyString << "\n"; 

    return 0;
}

void modificaString(char str[], char* copyString){
    int i;
    char c[1 + 1];
    memset(copyString, 0, sizeof(copyString)); 
    for (i = 0; i <= strlen(str); i++) {
        memset(c, 0, sizeof(c));
        if (str[i] >= 97 && str[i] <= 122) {
            c[0] = str[i] - 32;    
        } else {
            c[0] = str[i] + 32;
        }
        strncat(copyString, &c[0], 1);
    }
}
