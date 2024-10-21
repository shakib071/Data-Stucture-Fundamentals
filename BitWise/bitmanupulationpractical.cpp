#include<iostream>
using namespace std;

bool ispowerof2(int n){
    
    return (n &&  !(n&n-1));
    //ekhane 1st n && na dileoo hy
    //dicci jate n er value 0 dile flase ase
    //karon 0 2 er power na
    //jodi jero hoy tahole 2 er power
    //tai ! diye ghuraiya 1 banacci 0 ke
    //jate jeta dorkar sei hisebe bolte pari

}
int numberof1s(int n){
    int count=0;
    while(n!=0){
        n=n&n-1;
        count++;
    }
    return count;
}

int main(){
     
     cout<<ispowerof2(128)<<endl;
     //if output 1 that means true
   cout<<numberof1s(10)<<endl;
     
    return 0;

}