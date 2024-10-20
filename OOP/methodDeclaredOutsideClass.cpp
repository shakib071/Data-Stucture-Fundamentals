#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
      MyClass myObj;     // Create an object of MyClass
      myObj.myMethod();
     
    return 0;

}