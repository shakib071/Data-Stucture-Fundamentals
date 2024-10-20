#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

// Why Encapsulation?
// It is considered good practice to declare your class attributes as private (as often as you can). 
//Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
// Increased security of data

// private attribute ei main encapsulation a
//encapsulation mane holo lukano
//private kore attribute lukai tarpor getter and setter diye access kori


class Person {
  private:
    string name;
    int age;
  public:
    Person(string name, int age) {
      this->name = name;
      this->age = age;
    }
    void setName(string name) {
      this->name = name;
    }
    string getName() {
      return name;
    }
    void setAge(int age) {
      this->age = age;
    }
    int getAge() {
      return age;
    }
};

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     Person person("John Doe", 30);
 
  cout << "Name: " << person.getName() << endl;
  cout << "Age: " << person.getAge() << endl;
 
  person.setName("Jane Doe");
  person.setAge(32);
 
  cout << "Name: " << person.getName() << endl;
  cout << "Age: " << person.getAge() << endl;
     
    return 0;

}