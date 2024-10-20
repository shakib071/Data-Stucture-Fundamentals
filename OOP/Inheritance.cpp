#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

// In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

// derived class (child) - the class that inherits from another class
// base class (parent) - the class being inherited from
// To inherit from a class, use the : symbol.



//Base Class

class vehicle {
    public:
    string brand= "Ford";

    void honk() {
        cout<<"Tuut, tuut"<<endl;
    }

};


//Derived Class

class Car: public vehicle {
    public:
    string model="Mustang";
    
};






int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     Car myCar;
     myCar.honk();
     cout<<myCar.brand + " " +myCar.model<<endl;

      

     
    return 0;

}