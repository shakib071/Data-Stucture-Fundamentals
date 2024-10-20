#include<iostream>
using namespace std;

class AbstrctEmployee{
 virtual  void AskForPromotion()=0;
};

class Employee:AbstrctEmployee {
    private:
 
  string Company;//ei 3 ta private korlam karon eta na holeoo hbe.enkhon shudhu Introduceyourself function asbe
  int Age;
  protected://protected korle baire theke access kora jay
   string Name;
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

class Developer:public Employee{//by default private thake
    public:
    string FavProgramingLanguage;
  Developer(string name ,string company,int age,string favProgramingLanguage)
  :Employee(name,company,age){//1 line nichei dite hbe
   FavProgramingLanguage=favProgramingLanguage;
  }
  void FixBug(){
    cout<<Name<<" Fixed the bug using "<<FavProgramingLanguage<<endl;
  //Nmme na diye getName oo use kora jay jodi private rakhi class
  //protected korle Name access kora jbe
  }
  
};

class Teacher:public Employee{
    public:
  string Subject;
  void PrepareLesson(){
    cout<<Name<<" is preparing "<<Subject<<" lesson "<<endl;
  }
  Teacher(string name ,string company,int age,string subject)
  :Employee(name,company,age){
   Subject=subject;
  }
};
int main(){
     
   

   
    Developer d=Developer("Shakib","Harami cm",23,"c++");
   d.FixBug();
   d.AskForPromotion();
   Teacher t=Teacher("Jobayer","Jagannath University",35,"mathematic");
   t.PrepareLesson();
   t.AskForPromotion();

    return 0;
   
}