#include<iostream>
using namespace std;
int letrasMaiusculas(string str);
int main()
{
    string str;
    cout<<"Digite string com letra maiuscula: ";
    getline(cin,str);
    letrasMaiusculas(str);
    return 0;
}
int letrasMaiusculas(string str){
    int i=0, count=0,n;
    n=str.length();
    while(i<n)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            count++;
        }
        i++;
    }
    cout<<"Numero de letra(s) maiuscula(s): "<<count;
}