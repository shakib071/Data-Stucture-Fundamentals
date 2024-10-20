#include<bits/stdc++.h>
using namespace std;
//segmented seive 
void primeSeive(int n){
    int prime[1000000]={0};//1000 er besi hbe na

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;

}
// void PrimeFactor(int n){
//     int spf[100]={0};
//     for(int i=2;i<=n;i++){
//         spf[i]=i;
//     }
//     for(int i=2;i<=n;i++)
//     {
//         if(spf[i]==i){
//             for(int j=i*i;j<=n;j++){
//                 if(spf[j]==j){
//                     spf[j]=i;
//                 }
//             }
//         }
//     }
//     while(n!=1){
//         cout<<spf[n]<<" ";
//         n=n/spf[n];
//     }
// }
//VULL

int main(){
     
   int n;
   cin>>n;  
     primeSeive(n);
    // PrimeFactor(n);
    return 0;

}