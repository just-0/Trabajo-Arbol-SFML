#include"include.h"

int main()
{
    string entrada= "3+((5+9)*2)";

    ArTree T1;
    /*T1.root = new ArNode('*');
    T1.root->nodes[0] = new ArNode('1');
    T1.root->nodes[1] = new ArNode('2');
    T1.Print();*/
    a1(entrada,T1.root);
    T1.Print();
    //cout<<SearchOp(entrada)<<endl;
    //cout<<entrada[7]<<endl;
    
    DrawTree D1(T1);

    D1.Draw();
   
    //test1();
    
}   
