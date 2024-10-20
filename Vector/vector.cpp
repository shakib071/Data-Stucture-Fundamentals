#include<iostream>
#include<vector>
using namespace std;

int main(){
     
 vector<int>s;
 s.push_back(1);
 s.push_back(2);
s.push_back(4);
     
     for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
     }

     vector<int>::iterator it;
     for(it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
     }

     for(auto element:s){
        cout<<element<<endl;
     }

  return 0;

}