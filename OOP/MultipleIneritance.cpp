#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {

};

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
       MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
     
    return 0;

}