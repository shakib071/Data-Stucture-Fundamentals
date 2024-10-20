#include<iostream>
using namespace std;

class Employee{
    public:
  string Name;
  string Company;
  int Age;

  void IntroduceYourself(){
    cout<<"Name -"<<Name<<endl;
    cout<<"Company - "<<Company<<endl;
    cout<<"Age - "<<Age<<endl;
  }
  Employee(string name ,string company,int age){
   Name=name;
   Company=company;
   Age=age;

  }
};

int main(){
     
    //  int Number;
    //  Employee emplouee1;
    //  emplouee1.Name="Shakib";
    //  emplouee1.Company="Harami";
    //  emplouee1.Age=25;
    //  emplouee1.IntroduceYourself();
 
    //  Employee emplouee2;
    //  emplouee2.Name="Jobayer";
    //  emplouee2.Company="Jungle";
    //  emplouee2.Age=32;
    //  emplouee2.IntroduceYourself();

    //

    Employee employee1=Employee("Shakib","Harami",25);
    employee1.IntroduceYourself();

    return 0;

}