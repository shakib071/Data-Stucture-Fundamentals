#include<iostream>
using namespace std;

class Employee{
    private:
  string Name;
  string Company;//ei 3 ta private korlam karon eta na holeoo hbe.enkhon shudhu Introduceyourself function asbe
  int Age;
public:
void setName(string name){//setter
    Name=name;
}
string getName(){//getter
    return Name;
}
void setCompany(string company){
    Company=company;
}
string getCompany(){
    return Company;
}
void setAge(int age){
    //WE can set conditions like if condition
    Age=age;
}
int getAge(){
    return Age;
}

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
     
   

    Employee employee1=Employee("Shakib","Harami",25);
    employee1.IntroduceYourself();
   employee1.setAge(30);
   employee1.IntroduceYourself();
    return 0;

}