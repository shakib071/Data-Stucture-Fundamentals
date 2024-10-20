#include<bits/stdc++.h>
using namespace std;

int main(){
     
   string s;
   getline(cin,s);

     stringstream ss(s);//ss er moddhe s k dhukalam
     //space dekhe word identify kore
    //  ss<<s;//evabeoo input dewya jay
    string word;
    // ss>>word;//ss theke ekta word word string er modddhe hece
    // //2nd time dile arekta jabe
    // cout<<word<<endl;
    // ss>>word;
    //   cout<<word<<endl;
    while(ss>>word){
     cout<<word<<endl;
    }

     
    return 0;

}