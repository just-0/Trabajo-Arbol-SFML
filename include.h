#include<iostream>
using namespace std;
struct ArNode
{
    char value;
    ArNode* nodes[2];
    ArNode(char _v)
    {
        value = _v; nodes[0] = nodes[1] = 0;
    }
};


struct ArTree
{
    ArNode* root;
};



void stackear(char *a, int tamanho, int parentesis, int sumas, int productos)
{
    if(parentesis == 0 && sumas ==  0 && productos == 0) ;
}

int searchsum(string a)
{
    int tamanho = a.size();
    int parentesis = 0;
    int i = tamanho;
    for(; i > -1; i--)
    {
        if(a[i] == 41) parentesis++;
        else if(a[i] == 40) parentesis--;
        if(parentesis == 0 && a[i] == 43 ){return i;}
        //cout<<a[i]<<endl;
    }
    return -1;
}

void a1(string a)
{
    string left;
    string right;
    int tamanho = a.size();
    if(tamanho == 1)
    {
        cout<<a<<endl;
        return;
    }



    a1(right);
    cout<<a<<endl;
    a1(left);
}

string ParenFunc(string a)
{
    int parentesis = 0;
    int tamanho = a.size();
    string b;
    for(int i = 0; i < tamanho; i++)
    {
        if(parentesis>0 )b.push_back(a[i]);
        if(a[i] == 40) {parentesis++;}
        else if(a[i] == 41) parentesis--;
        //cout<<parentesis<<"\t"<<a[i]<<endl;
        
    }
    b.pop_back();
    return b;
}

void test(string a)
{
    int tamanho = a.size();

    for(int i = tamanho; i > -1; i--)
    {
        cout<<a[i]<<endl;
    }

}
