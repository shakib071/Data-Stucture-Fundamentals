#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

// we have only used public (members of a class are accessible from outside the class) 
//and private (members can only be accessed within the class). 
//The third specifier, protected, is similar to private, 
//but it can also be accessed in the inherited class:

// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};


int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
       Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
     
    return 0;

}