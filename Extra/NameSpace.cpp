#include<bits/stdc++.h>
using namespace std;
//namespace just a group

//A namespace is a declarative region that provides a scope 
//to the identifiers (the names of types, functions, variables, etc) inside it. Namespaces
// are used to organize code into logical groups and to prevent name collisions that can occur
// especially when your code base includes multiple libraries
namespace Rakib
{
    int age=24;
    void hello()
    {
        cout<<"Rakib namespaces"<<endl;
    }
}
namespace Sakib
{
    int age=30;
    void hello()
    {
        cout<<"Sakib namespaces"<<endl;
    }
}
using namespace Rakib;
int main()
{
    cout<<age<<endl;
    hello();
    Sakib::hello();
    return 0;
}