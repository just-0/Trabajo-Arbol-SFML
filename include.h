#include<iostream>
#include<queue>
//include "IncludeSFML.h"
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
    void PreOrder(ArNode* n)
    {
        if (!n) return;
        cout << n->value << "-";
        PreOrder(n->nodes[0]);
        PreOrder(n->nodes[1]);
    }
    void PostOrder(ArNode* n)
    {
        if (!n) return;

        PreOrder(n->nodes[0]);
        PreOrder(n->nodes[1]);
        cout << n->value << "-";
    }
    void Profundidad(ArNode*n)
    {
        std::queue<ArNode*> q;
        q.push(n);
        

        while(q.size()>0)
        {
            if(q.front()->nodes[0])q.push(q.front()->nodes[0]);
            if(q.front()->nodes[1])q.push(q.front()->nodes[1]);
            cout<<q.front()->value;
            q.pop();
        }
    }
    void Prof(ArNode*n)
    {
        std::queue<ArNode*> q;
        q.push(n);
        

        while(q.size()>0)
        {
            if(q.front()->nodes[0])q.push(q.front()->nodes[0]);
            if(q.front()->nodes[1])q.push(q.front()->nodes[1]);
            cout<<q.front()->value;
            q.pop();
        }
    }
    void Print()
    {   
        Profundidad(root);
        
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
//2+3
string a1(string a,ArNode *&root)
{
    int tamanho = a.size();
    if(tamanho == 1)
    {
        root = new ArNode(a[0]);
        return a;
    }
    int i = SearchOp(a);
    string left = AsingLeft(a,i);
    string right = AsingRight(a,i);

    root = new ArNode(a[i]);
    a1(left,root->nodes[0]);
    a1(right,root->nodes[1]);
    return "xd"; 
}

//--------------------------------------SFML------------------------------------------
/*sfml
#!/bin/bash

clear
g++ -c $1.cpp
g++ -c $1.cpp -I/usr/include/SFML/include
g++ -Wall $1.o -o sfml-app -L/usr/include/SFML/lib -lsfml-graphics -lsfml-window -lsfml-system
./sfml-app

*/

