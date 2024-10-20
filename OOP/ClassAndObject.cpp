#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

class MyClass {
    public: //access Specifier
    int myNum; //Class Attribute
    string mystring; //Class Attribute
};

int main(){
     
//  ios::sync_with_stdio(0);cin.tie(0);
     
     MyClass myobj;//Create an object of myclass

     myobj.myNum=15;
     myobj.mystring="ghjsdfg";

     cout<<myobj.myNum<<" "<<myobj.mystring<<endl;
     
    return 0;

}