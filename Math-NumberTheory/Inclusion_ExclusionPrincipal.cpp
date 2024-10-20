#include<bits/stdc++.h>
using namespace std;
//apna collage youtube channel
int divisible(int n,int a,int b){
    int c1=n/a;//how many numvber between 1 to n is divisible by a;
    int c2=n/b;//divisiable by b
    int c3=n/(a*b);//divisible by both;

    return c1+c2-c3;
}

int main(){
     
     int n,a,b;
     cin>>n>>a>>b;
    cout<< divisible(n,a,b)<<endl;
     
    return 0;

}