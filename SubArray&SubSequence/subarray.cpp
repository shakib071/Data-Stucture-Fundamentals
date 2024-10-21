//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void subarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            for(int k=i;k<=j;k++)
            cout<<arr[k]<<" ";
            cout<<endl;
        }
        
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int arr[]={1,2,0,7,2};
     subarray(arr,5);
     
    return 0;

}