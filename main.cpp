#include"include.h"

int main()
{
    //3+((5+9)*2)*3
    string entrada= "3+((5+9)*2)";

    ArTree T1;
    /*T1.root = new ArNode('*');
    T1.root->nodes[0] = new ArNode('1');
    T1.root->nodes[1] = new ArNode('2');
    T1.Print();*/
    a1(entrada,T1.root);
    printTree(T1.root, nullptr, false);

    T1.PostOrder(T1.root);
    cout<<endl;

    //cout<<char(195)<<endl;

    //cout<<SearchOp(entrada)<<endl;
    //cout<<entrada[7]<<endl;
    
   
    //test1();
    
}   
