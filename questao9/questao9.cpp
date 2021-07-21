#include<iostream>
using namespace std;
int letrasMinusculas(string str);
int main()
{
    string str;
    cout<<"Digite string com letra minusculas: ";
    getline(cin,str);
    letrasMinusculas(str);
    return 0;
}
int letrasMinusculas(string str){
    int i=0, count=0,n;
    n=str.length();
    while(i<n)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            count++;
        }
        i++;
    }
    cout<<"Numero de letra(s) minusculas(s): "<<count;
}