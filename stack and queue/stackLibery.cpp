#include<bits/stdc++.h>
using namespace std;

void reveseSentence(string s){

    stack<string>st;
    for(int i=0;i<s.length();i++){
        string word="";

        while(s[i] != ' ' and i<s.length()){
          word+=s[i];
          i++;
          //stringstream diyeoo kora jay
          //kintu codeforce stringstream bujhe na
        }
        st.push(word);
        
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

}

int main(){
     
   
    
    string s="Hey, how are you doing?";
     reveseSentence(s);
     
    return 0;

}