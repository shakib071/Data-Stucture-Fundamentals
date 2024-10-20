// #include<bits/stdc++.h>
// #define ll long long int
// #define forn(n) for(int i=0;i<n;i++)
// using namespace std;

// class MyClass{
//     public:

//     MyClass(){ //constractor has a same name as class
//         cout<<"Hello"<<endl;
//     }
// };

// int main(){
     
//  ios::sync_with_stdio(0);cin.tie(0);
//       MyClass myObj;    // Create an object of MyClass (this will call the constructor)
     
//     return 0;

// }



#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

class Car{
    public://access specifier
    string Brand;
    string model;
    int Year;

    Car(string x,string y,int z){//constactor with perameter
    Brand=x;
    model=y;
    Year=z;
    }
};


int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     
     Car cobj1("BMW","ALu",2332); //object with perameter given in constractor
     
     cout<<cobj1.Brand<<" "<<cobj1.model<<" "<<cobj1.Year<<endl;
     
    return 0;

}




//constractor Outside the class


// class Car {        // The class
//   public:          // Access specifier
//     string brand;  // Attribute
//     string model;  // Attribute
//     int year;      // Attribute
//     Car(string x, string y, int z); // Constructor declaration
// };

// // Constructor definition outside the class
// Car::Car(string x, string y, int z) {
//   brand = x;
//   model = y;
//   year = z;
// }

// int main() {
//   // Create Car objects and call the constructor with different values
//   Car carObj1("BMW", "X5", 1999);
//   Car carObj2("Ford", "Mustang", 1969);

//   // Print values
//   cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//   cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//   return 0;
// }