#include<iostream>
#include<limits.h>
using namespace std;

void Swap(int data[],int i,int j){
  int temp=data[i];
  data[i]=data[j];
  data[j]=temp;
}

int Partition(int data[],int l,int r){
    int pivot=data[r];
    int i=l-1;

    for(int j=l;j<r;j++){
        if(data[j]<pivot){
            i++;
            Swap(data ,i,j);
        }
    }
    Swap(data,i+1,r);
    return i+1;
}

void QuickShort(int data[],int l,int r){
    if(l<r){
      int  pi=Partition(data,l,r);
      QuickShort(data,l,pi-1);
      QuickShort(data,pi+1,r);

    }
}

int main(){
     
     int n;
     cin>>n;
   int data[n];
   for(int i=0;i<n;i++){
    cin>>data[i];
   }
   QuickShort(data,0,n-1);

   for(int i=0;i<n;i++){
    cout<<data[i]<<" ";
   }
     
    return 0;

}