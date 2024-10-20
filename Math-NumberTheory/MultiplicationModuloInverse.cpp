#include<bits/stdc++.h>
using namespace std;

//ax+by=gcd(a,b)//khata dekh//50 page khatar

struct triplet{
    int x,y,gcd;
};

triplet extendedEuclid(int a,int b){
    if(b==0){
        triplet ans;
        ans.x=1;
        ans.gcd=a;//na bujle extended euclid dekh abar
        ans.y=0;
        return ans;
    }
  triplet smallAns=extendedEuclid(b,a%b);
  triplet ans;
  ans.x=smallAns.y;
  ans.gcd=smallAns.gcd;
  ans.y=smallAns.x-(a/b)*smallAns.y;
  return ans;
  //ekhan theke a x ar y pabo

}

int multiplicativeModuloInvese(int a,int m){
   triplet temp=extendedEuclid(a,m);
   return temp.x;
}



int main(){
     
     int a,m;
     cin>>a>>m;

     cout<<multiplicativeModuloInvese(a,m)<<endl;
     
    return 0;

}
// 17 3 dile -1 ase ..its right ..kintu plus value chaile ans er shathe m plus korlei hbe