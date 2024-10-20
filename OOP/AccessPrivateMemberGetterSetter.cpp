#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

class Employee{
   private:
   int salary;

   public:
    //setter
    void setSalary(int s){
        salary=s;
    }
    //Getter

    int getSalary(){
        return salary;
    }
};

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    Employee myobj;
     myobj.setSalary(50000);
     cout<<myobj.getSalary()<<endl;
    return 0;

}