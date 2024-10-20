#include<bits/stdc++.h>
using namespace std;

int main(){
     
     string sentence;
     getline(cin,sentence);
     string word;
     stringstream ss(sentence);
     map<string,int>mp;
     while(ss>>word){
        // cout<<word<<endl;
        mp[word]++;
        //count bariye debe;
        //ekhane intially 0 thake 
        //shob value
        //protibar 1 1 kore baracci
        //mane count hoye jacce
        //mane value tai count

     }

     for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
     //dereference kore 1st 2nd dekci
     }

     //jodi 1 tar dekhte chai tahole
     cout<<mp["love"]<<endl;
     
    return 0;

}