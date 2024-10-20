#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;//unchanged

int totient[N];

int main(){
     
     for(int i=0;i<N;i++){
        totient[i]=i;
     }

     for(int i=2;i<N;i++){
        if(totient[i]==i){
            for(int j=2*i;j<N;j+=i){//onekta seive er approch
                totient[j]*=i-1;
                totient[j]/=i;//because for composite numbers
                //toitient n*(1-1/p1)...=n*(p1-1)/p1
            }
            totient[i]=i-1;///prime num er nicher shobgulai coprime tai n er jonno n-1 ta

        }
     }
     for(int j=2;j<11;j++){
            cout<<totient[j]<<endl;
        }
     
    return 0;

}