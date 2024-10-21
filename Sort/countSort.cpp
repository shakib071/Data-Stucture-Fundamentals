//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void countSort(int arr[],int n){
    int k=arr[0];
    //find max num

    for (int i=0;i<n;i++){
        k=max(k,arr[i]);
    }
    int count[k+1] = {0};

    // forn(k+1) cout<<count[i]<<" ";

    //count array
    //which num has which times
    for (int i=0;i<n;i++){
        count[arr[i]]++;
    }
    //modify count array .. current + previous index
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }

    int output[n];

    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
        //-- agei korte hbe
    }

   for (int i=0;i<n;i++){
        arr[i]=output[i];
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int arr[]={1,3,2,3,4,1,6,4,3};
     countSort(arr,9);
    cout<<endl;
     for (int i=0;i<9;i++){
        cout<<arr[i]<<" ";
     }
     
    return 0;

}