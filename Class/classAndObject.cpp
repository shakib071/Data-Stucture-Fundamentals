#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    double cgpa;

    Student(string n , int r , double g){//constractor;
     name =n;
     roll=r;
     cgpa=g;
    }
};


// getchar() diye eta grabaje char nei jate enter chap dile char hisebe na ney.


int main(){
     
     Student a ("sgh",5,5.00);
    //  a.roll=30;
    //  a.cgpa=3.77;
    //  char temp[100]="Sakib";//string nile eto jhamela nai
    //  strcpy(a.name,temp);
     cout<<a.name<<" "<<a.cgpa<<" "<<a.roll;
     
    return 0;

}