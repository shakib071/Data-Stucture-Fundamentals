#include<iostream>
using namespace std;

class AbstrctEmployee{
 virtual  void AskForPromotion()=0;
};

class Employee:AbstrctEmployee {
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
  void AskForPromotion(){
    if(Age>30){
        cout<<Name<<" Got promoted"<<endl;
    }
    else{
        cout<<Name<<" No promotion for u"<<endl;
    }
  }
};

int main(){
     
   

    Employee employee1=Employee("Shakib","Harami",25);
    Employee employee2=Employee("Jobayer","Alu",35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
   
    return 0;
   
}