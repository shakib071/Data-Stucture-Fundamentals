#include<bits/stdc++.h>
using namespace std;

int main(){
     
     int n,t;
     cin>>t;

     while(t--){

     cin>>n;
     int data[n],flag=0;

     for(int i=0;i<n;i++) cin>>data[i];

     for(int i=0;i<n-1;i++){
        if(data[i+1]<data[i]){
            flag=1;
            cout<<"NO"<<endl;
            break;
        }
     }
     if(flag==0) cout<<"YES"<<endl;

     }

     
    return 0;

}