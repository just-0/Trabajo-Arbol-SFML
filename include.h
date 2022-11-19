#include<iostream>
using namespace std;

//----------------------------------------------Estructura Arbol----------------------
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

    ArTree()
    {
        root = 0;
    }
    void InOrder(ArNode* n)
    {
        if (!n) return;

        InOrder(n->nodes[0]);
        cout << n->value << "-";
        InOrder(n->nodes[1]);
    }
    void Print()
    {   
        InOrder(root);
        
        cout << endl;
    }   
};

//---------------------------------------------Rellenar Arbol-----------------------------
int SearchOp(string a)
{
    int tamanho = a.size();
    int parentesis = 0;
    int i = 0;
    bool sumaresta = false;
    int retornar = -1;
    for(; i <tamanho; i++)
    {
        if(a[i] == '(') parentesis++;
        else if(a[i] == ')') parentesis--;
        if(parentesis == 0 && (a[i] == 43 || a[i] == 45) )
        {
            retornar = i;
            sumaresta = true;
        }
        if(parentesis == 0 && sumaresta == false && (a[i] == 42 || a[i] == 47)) 
        {
            retornar = i;
            
        }
        //cout<<a[i]<<endl;
    }
    return retornar;
}


string AsingLeft(string a, int p)
{
    string returner;
    int tamanho = p;
    int i = 0;
    if(a[0] == '(' && a[tamanho-1] == ')'){i++;tamanho--;}
    for(;i<tamanho;i++)
    {
        returner.push_back(a[i]);
    }
    
    return returner;
}
string AsingRight(string a, int p)
{
    string returner;
    int tamanho = a.size();
    int i = p+1;
    if(a[p+1] == '(' && a[tamanho-1] == ')'){i++;tamanho--;}
    for(;i<tamanho;i++)
    {
        returner.push_back(a[i]);
    }
    
    return returner;
}
string a1(string a)
{
    int tamanho = a.size();
    if(tamanho == 1)
    {
        cout<<a<<endl;
        return a;
    }
    int i = SearchOp(a);
    string left = AsingLeft(a,i);
    string right = AsingRight(a,i);

    cout<<a[i]<<endl;
    a1(left);
    a1(right);
    return "xd"; 
}
