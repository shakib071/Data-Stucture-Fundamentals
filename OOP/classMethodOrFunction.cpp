#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

class Myclass {
    public:
    int age;
    void myMethod(){ //method is a function declared inside a class
     cout<<"Alu is the Universal vegetable of the World";
    }
};



int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     Myclass myObj;//object Create
     myObj.myMethod();

     
    return 0;

}