//unoptimized version
//DP na

// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;\

// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }

// //complexity(O(n^2))
// //Dp na
// // optimization needed

// int main(){
     
//  ios::sync_with_stdio(0);cin.tie(0);
     
//      int n;
//      cin>>n;

//      cout<<fib(n);
     
//     return 0;

// }



//DP version
//top down approch
//recusion method

// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// const int N=1e6+6;
// int dp[N];


// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     return dp[n]=fib(n-1)+fib(n-2);
//     //ei optimizatiion ei memoization
//     //top down approch or recursion method
// }

// // complexity O(n)


// int main(){
     
//  ios::sync_with_stdio(0);cin.tie(0);
//      memset(dp,-1,sizeof(dp));
//       int n;
//      cin>>n;

//      cout<<fib(n);
     
//     return 0;

// }




//Dp 
//Bottom up arroch
//loop method

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);

   int n;
   cin>>n;
   int a[n+1];
   a[0]=0;
   a[1]=1;

   for(int i=2;i<=n;i++){
    a[i]=a[i-1]+a[i-2];
   }  

   cout<<a[n]<<endl;

   //complexity O(n)
     
    return 0;

}

