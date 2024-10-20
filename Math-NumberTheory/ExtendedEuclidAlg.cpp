#include<bits/stdc++.h>
using namespace std;

//ax+by=gcd(a,b);
//gcd(d,0)=d;

//let y=0;
//ax+0=a;because gcd(a,0)==a;
//x=1;

struct triplet
{
    int x,y,gcd;
};

triplet extendedEuclid(int a, int b){
  //  cout<<a<<" "<<b<<endl;
  if(b==0){
    triplet ans;
    //ax+by=gcd(a,b);
//gcd(d,0)=d;

//let y=0;
//ax+0=a;because gcd(a,0)==a;
//and  x=1;
    ans.x=1;
    ans.gcd=a;
    ans.y=0;
    //  cout<<ans.gcd<<"a "<<ans.x<<" "<<ans.y<<endl;
    return ans;

  }

  triplet smallAns= extendedEuclid(b,a%b);
    // cout<<smallAns.gcd<<" s"<<smallAns.x<<" "<<smallAns.y<<endl;
  //gcd(b,a%b)=bx1+(a%b)y1
  triplet ans;
  ans.gcd=smallAns.gcd;
  ans.x=smallAns.y;
  ans.y=smallAns.x - (a/b)*smallAns.y;
  // cout<<ans.gcd<<"h "<<ans.x<<" "<<ans.y<<endl;
  return ans;

}

signed main(){
     
     int a,b;
     cin>>a>>b;

     triplet ans=extendedEuclid(a,b);
     cout<<ans.gcd<<" "<<ans.x<<" "<<ans.y<<endl;
    return 0;

}