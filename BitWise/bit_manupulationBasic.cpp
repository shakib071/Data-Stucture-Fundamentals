#include<iostream>
using namespace std;

int getBit(int n,int pos){

    return (n & (1<<pos)!=0);
    // if true returns 1 false 0;
    //partucular position a kon bit acea 1 ta 0
    //seta ber korte eta
    //jodi 1 return kore tahole 1 acea noile 0;
    
}
int setBit(int n,int pos){
    return(n|(1<<pos));
}
int clearBit(int n,int pos){
    int mask= ~(1<<pos);
    return(n & mask);
}

int updateBit(int n,int pos,int value){
    int mask=~(1<<pos);
    n=n & mask;//clear korlam
    return(n|(value<<pos));
    //oi jaygay valu ta dicci;
    //na bujle abar video dekh
}
int main(){

     cout<<getBit(5,2)<<endl;
     cout<<setBit(5,1)<<"\n";
     cout<<clearBit(5,2)<<endl;
     cout<<updateBit(5,1,1);
    return 0;

}