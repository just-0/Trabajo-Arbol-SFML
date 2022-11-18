#include<iostream>
#include"include.h"
using namespace std;

int main()
{
    char a[] = "3+((5+9)*2)";
    
    int tamanho = sizeof(a)-1;
    cout<<tamanho<<endl;

    int parentesis = 0;
    int sumas = 0;
    int productos = 0;
    
    for(int i = 0; i < tamanho; i++)
    {
        if(a[i] == 40) parentesis++;
        else if(a[i] == 41) parentesis--;
        if(parentesis == 0 && a[i] ==  43) sumas++;
        if(parentesis == 0 && a[i] ==  42) productos++;
        cout<<parentesis<<"\t"<<a[i]<<endl;
    }
    cout<<"->"<<sumas<<"\t"<<productos<<endl;
}
