//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

//The DNF Sort (Dutch National Flag Sort) is an algorithm
//that sorts an array of three distinct values, 
//often referred to as 0, 1, and 2

//This sorting algorithm is typically applied to arrays
// with three distinct elements

void swap(int arr[],int i,int j){
    int temp= arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void DNFSort(int arr[],int n){
    int low=0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if (arr[mid]==0){
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
}
 
int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int arr[]={1,0,2,1,0,1,2,1,2};
     DNFSort(arr,9);
    // cout<<endl;
     for (int i=0;i<9;i++){
        cout<<arr[i]<<" ";
     }
     
    return 0;

}