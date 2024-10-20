#include<bits/stdc++.h>
#define ll long long int
using namespace std;

//dp version
//top down approch
//recursion

// 2 ta value change hoccche tai memoization
//2 ta value n and w er jonno hbe
//2 dimentional array diye value save kore optized korte hbe
//complexity O(n*w);
const int maxN=1000;
const int maxW=1000;

int dp[maxN][maxW];

//https://phitron.io/PH064/video/PH064-18-2-0-1-knapsack-recursive-approach
int knapsack(int n,int weight[],int value[],int w){
    
    if(n<0 ||w==0) return 0;

    //w minus hbe na karon amra w er theke coto
    //weight holei shudhu call korci
    
    if(dp[n][w] !=-1){
        return dp[n][w];
    }

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

       return dp[n][w]= max(op1,op2);//save korteci jate pore use kora jay bar bar call korte na hoy
       //karon ami max value chaitecilar jeta amar
       //knapsack a atea
     }
   else{
    //ekta option
    //na niye dekhbo
      int op2=knapsack(n-1,weight,value,w);
      //same
      return dp[n][w]= op2;
      //save korci jate pore use kora jay bar bar call 
      //korte na hoy 
      //etai optimization
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

     for(int i=0;i<=n;i++){
       for(int j=0;j<=w;j++){
        dp[i][j]=-1;
       }
     }

     // n ar w call hower shathe shate kombe barbe na
    //tai er besi value memset korar dorkar nai
     
     cout<<knapsack(n-1,weight,value,w)<<endl;
//n-1 dici karon index niye kaj korbo
    return 0;

}