//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void WaveSort(int arr[],int n){
    for (int i=1;i<n;i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }

        if(i<=n-2 and arr[i]>arr[i+1] ){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);

 int arr[]={1,3,4,7,5,6,2};

 WaveSort(arr,7);

 forn(7)cout<<arr[i]<<" ";
     
     
    return 0;

}