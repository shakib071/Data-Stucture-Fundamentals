#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
};
int main()
{
    Person* rakib=new Person("Rakib Ahsan",25);
    Person* sakib=new Person("Sakib Ahamed",23);

    // rakib=sakib;//shudhu point kore tai shakib delete korle
    //ar pabe na
//tai dynamaccally copy korte hbe
    // rakib->name=sakib->name;
    // rakib->age=sakib->age;
    *rakib=*sakib;
    delete sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}