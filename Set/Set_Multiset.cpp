// #include<bits/stdc++.h>
// using namespace std;
// //set//duplicate not allowed
// //random acces not posssible

// //automatically delete duplicates
// int main(){
     
//      set<int> s;
//      //we can make set of vector ,pair etc
//      s.insert(1);
//      s.insert(2);
//      s.insert(2);
//      s.insert(3);
   
//      for(auto i : s){
//         cout<<i<<" ";
//      }
//      cout<<endl;
//      cout<<s.size()<<endl;
//      s.erase(2);
//       for(auto i : s){
//         cout<<i<<" ";
//      }
//     return 0;

// }



//Multiset
//duplicatate allowed
//also random access not possible 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      multiset<int> s;
     
//      s.insert(1);
//      s.insert(2);
//      s.insert(3);
//      s.insert(3);
//      s.insert(3);
//      s.insert(3);
//      s.insert(4);
   
//      for(auto i : s){
//         cout<<i<<" ";
//      }
//      cout<<endl;
//      cout<<s.size()<<endl;
//    //   s.erase(3);//shob 3 delete hoye jabe
//    s.erase(s.find(3));//ekta 3 delete hbe
//       for(auto i : s){
//         cout<<i<<" ";
//      }
     
     
//     return 0;

// }




//Unordered Set

#include<bits/stdc++.h>
using namespace std;

int main(){
     
     unordered_set<int> s;
     //we can make set of vector ,pair etc
     s.insert(1);
     s.insert(2);
     s.insert(2);
     s.insert(3);
   
     for(auto i : s){
        cout<<i<<" ";
     }
     cout<<endl;
     cout<<s.size()<<endl;
     s.erase(2);
      for(auto i : s){
        cout<<i<<" ";
     }
     
    return 0;

}