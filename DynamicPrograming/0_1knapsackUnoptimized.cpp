#include<bits/stdc++.h>
#define ll long long int
using namespace std;

//complexity O(2^n);
//unoptimized 
//dp na
//memoization ba optiation korle dp hobe
//https://phitron.io/PH064/video/PH064-18-2-0-1-knapsack-recursive-approach
int knapsack(int n,int weight[],int value[],int w){
    
    if(n<0 ||w==0) return 0;

    //w minus hbe na karon amra w er theke coto
    //weight holei shudhu call korci


   if(weight[n]<=w){
    //duita option
    //niye dekhbo
    //na niye dekhbo
    int op1=knapsack(n-1,weight,value,w-weight[n])+ value[n];

    //option 1//niye dekhbo
    //recurtion k bollam ageer gula thke konta nile max value pabo
    //weight[n] already knapsack ba bag a acea tai oi weight ta
    //bad diye bakigular upor check korci
    //recurive call baki gula theke max value ene debe
    //tar shathe oi value ta add kore dila

    int op2=knapsack(n-1,weight,value,w);
    //option 2 //na nile 
    //ebar ba nile weight ar change hbe na ami baki gular jonno abar 
    //knapsack dakci
    //ar kicu na
    //shudhu oi n index er weight ta bad dicci
    //ekhane value add korar dorkar nai karon oi weight na choice kori nai

       return max(op1,op2);
       //karon ami max value chaitecilar jeta amar
       //knapsack a atea
     }
   else{
    //ekta option
    //na niye dekhbo
      int op2=knapsack(n-1,weight,value,w);
      //same
      return op2;
   }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);

     int n;
     cin>>n;
     int weight[n],value[n];
     for(int i=0;i<n;i++){
        cin>>weight[i];
     }
      for(int i=0;i<n;i++){
        cin>>value[i];
     }

     int w;
     cin>>w;//knapsack er weight
     //mane bag a kototuku max atbe
     
     cout<<knapsack(n-1,weight,value,w)<<endl;
//n-1 dici karon index niye kaj korbo
    return 0;

}